#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Package {
private:
    int weight;
    int value;
public:
    Package(int w, int v) : weight(w), value(v) {}
    int getWeight() const {
        return weight;
    }
    int getValue() const {
        return value;
    }
};
class Knapsack {
private:
    int capacity;
    vector<Package> packages;
public:
    Knapsack(int cap) : capacity(cap) {}

    void addPackage(const Package& pack) {
        packages.push_back(pack);
    }
    int solve() {
        int n = packages.size();
        vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
        for (int i = 1; i <= n; ++i) {
            for (int w = 1; w <= capacity; ++w) {
                if (packages[i - 1].getWeight() <= w) {
                    dp[i][w] = max(dp[i - 1][w], packages[i - 1].getValue() + dp[i - 1][w - packages[i - 1].getWeight()]);
                } else {
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }
        return dp[n][capacity];
    }
    vector<Package> getPackages() const {
        return packages;
    }
};
int main() {
    int M;
    cout << "Enter the maximum weight the thief can carry: ";
    cin >> M;
    Knapsack knapsack(M);
    knapsack.addPackage(Package(10, 60));
    knapsack.addPackage(Package(20, 100));
    knapsack.addPackage(Package(30, 120));
    cout << "Packages in the supermarket:" << endl;
    cout << "Weight\tValue" << endl;
    for (const auto& pack : knapsack.getPackages()) {
        cout << pack.getWeight() << "\t" << pack.getValue() << endl;
    }
    cout << "Maximum value the thief can take: " << knapsack.solve() << endl;
    return 0;
}