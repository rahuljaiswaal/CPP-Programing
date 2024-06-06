#include <iostream>
#include <vector>
#include <string>
using namespace std;
string longest_common_subsequence(const string& str1, const string& str2, vector<vector<int>>& dp) {
    int m = str1.length();
    int n = str2.length();
    dp.resize(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string lcs;
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            lcs = str1[i - 1] + lcs;
            --i;
            --j;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            --i;
        } else {
            --j;
        }
    }
    return lcs;
}
int main() {
    string str1 = "ABCBDAB";
    string str2 = "BDCAB";
    vector<vector<int>> dp;
    string lcs = longest_common_subsequence(str1, str2, dp);
    cout << "Dynamic Programming Table:" << endl;
    for (const auto& row : dp) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << "\nLongest Common Subsequence: " << lcs << endl;
    return 0;
}
