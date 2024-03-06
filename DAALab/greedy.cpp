#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <chrono>
using namespace std;
using namespace chrono;
struct Task {
    int id;
    int deadline;
    int loss;
    int profit;
    Task(int i, int d, int l, int p) : id(i), deadline(d), loss(l), profit(p) {}
};
bool compareTasks(const Task& task1, const Task& task2) {
    return task1.deadline < task2.deadline; 
}
struct CompareProfitLossRatio {
    bool operator()(const Task& task1, const Task& task2) const {
        return (double)task1.profit / task1.loss < (double)task2.profit / task2.loss;
    }
};
struct CompareDeadline {
    bool operator()(const Task& task1, const Task& task2) const {
        return task1.deadline > task2.deadline; // Sort tasks by their deadlines in descending order
    }
};
pair<vector<int>, pair<int, int>> taskScheduling(vector<Task>& tasks) {
    sort(tasks.begin(), tasks.end(), compareTasks);
    priority_queue<Task, vector<Task>, CompareProfitLossRatio> maxHeap;
    priority_queue<Task, vector<Task>, CompareDeadline> sortedTasks(tasks.begin(), tasks.end());
    vector<int> schedule;
    int maxDeadline = 0;
    for (const auto& task : tasks) {
        maxDeadline = max(maxDeadline, task.deadline);
    }
    vector<bool> slots(maxDeadline, false);
    int totalProfit = 0, totalLoss = 0;
    auto start = high_resolution_clock::now();
    while (!sortedTasks.empty()) {
        Task currentTask = sortedTasks.top();
        sortedTasks.pop();
        int j = min(currentTask.deadline - 1, maxDeadline - 1);
        while (j >= 0 && slots[j]) {
            j--;
        }
        if (j >= 0) {
            slots[j] = true;
            schedule.push_back(currentTask.id);
            maxHeap.push(currentTask);
            totalProfit += currentTask.profit;
            totalLoss += currentTask.loss;
        } else if (!maxHeap.empty() && maxHeap.top().profit < currentTask.profit) {
            Task poppedTask = maxHeap.top();
            maxHeap.pop();
            int taskId = poppedTask.id;
            schedule.erase(remove(schedule.begin(), schedule.end(), taskId), schedule.end());
            slots[currentTask.deadline - 1] = true;
            schedule.push_back(currentTask.id);
            maxHeap.push(currentTask);
            totalProfit += currentTask.profit - poppedTask.profit;
            totalLoss += currentTask.loss - poppedTask.loss;
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time Taken: " << duration.count() << " milliseconds\n";
    return {schedule, {totalProfit, totalLoss}};
}
int main() {
    vector<Task> tasks = {{1, 3, 2, 5}, {2, 5, 1, 8}, {3, 2, 3, 10}, {4, 8, 1, 12}};
    auto result = taskScheduling(tasks);
    cout << "Task Schedule:\n";
    for (const auto& taskId : result.first) {
        cout << "Task " << taskId << "\n";
    }
    cout << "Total Profit: " << result.second.first << "\n";
    cout << "Total Loss: " << result.second.second << "\n";
    return 0;
}