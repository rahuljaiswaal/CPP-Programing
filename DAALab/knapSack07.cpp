// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// struct Item { 
//     int weight; 
//     int value;
// };
// bool compareItems(Item item1, Item item2) {
//     double ratio1 = static_cast<double>(item1.value) / item1.weight;
//     double ratio2 = static_cast<double>(item2.value) / item2.weight; 
//     return ratio1 > ratio2;
// }
// void knapsackGreedy(vector<Item>& items, int capacity) {
//     sort(items.begin(), items.end(), compareItems);
//     int n = items.size(); 
//     double totalValue = 0.0; 
//     vector<int> solution(n, 0);
//     for (int i = 0; i < n; ++i) {
//         if (items[i].weight <= capacity) { 
//             solution[i] = 1;
//             totalValue += items[i].value; 
//             capacity -= items[i].weight;
//         } 
//         else {
//             solution[i] = capacity / items[i].weight; 
//             totalValue += solution[i] * items[i].value;
//             break;
//         }
//     }
//     cout << "Selected items:" << endl; 
//     for (int i = 0; i < n; ++i) { 
//         if(solution[i] > 0) {
//             cout << "Item " << i + 1 << ": " << solution[i] << " times" << endl;
//         }
//     }
//     cout << "Total value: " << totalValue << endl;
// }
// int main() {
//     vector<Item> items = {{4, 40}, {30, 200}, {50, 100}, {57, 40}, {75, 30}}; 
//     int capacity = 15;
//     cout << "Knapsack problem solution using greedy method:" << endl; 
//     knapsackGreedy(items, capacity); 
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Item {
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};
bool compare(Item a, Item b) {
    double ratioA = (double)a.value / a.weight;
    double ratioB = (double)b.value / b.weight;
    return ratioA > ratioB;
}
double knapsackGreedy(vector<Item>& items, int capacity) {
    sort(items.begin(), items.end(), compare);
    double totalValue = 0.0;
    int currentWeight = 0;
    cout << "Selected items:" << endl;
    for (const Item& item : items) {
        if (currentWeight + item.weight <= capacity) {
            cout << "Item with value " << item.value << " and weight " << item.weight << " added to the knapsack." << endl;
            totalValue += item.value;
            currentWeight += item.weight;
        } else {
            double remainingWeight = capacity - currentWeight;
            double fraction = remainingWeight / item.weight;
            totalValue += fraction * item.value;
            cout << "Item with value " << item.value << " and weight " << item.weight
                 << " partially added to the knapsack"<<endl<<"Fraction taken: " << fraction << endl;
            break;
        }
    }
    cout << "Maximum value in the knapsack: " << totalValue << endl;
    cout << "Remaining capacity: " << capacity - currentWeight << endl;
    return totalValue;
}
int main() {
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};
    int capacity = 50;
    cout << "Knapsack capacity: " << capacity << endl;
    double maxValue = knapsackGreedy(items, capacity);
    return 0;
}