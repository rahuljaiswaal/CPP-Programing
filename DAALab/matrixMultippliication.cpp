#include <iostream>
#include <vector>
using namespace std;
void matrix_chain_order(const vector<int>& p, vector<vector<int>>& m, vector<vector<int>>& s) {
    int n = p.size() - 1;
    m.resize(n + 1, vector<int>(n + 1, 0));
    s.resize(n + 1, vector<int>(n + 1, 0));
    for (int length = 2; length <= n; ++length) {
        for (int i = 1; i <= n - length + 1; ++i) {
            int j = i + length - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; ++k) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}
void print_optimal_parens(const vector<vector<int>>& s, int i, int j) {
    if (i == j)
        cout << "A" << i;
    else {
        cout << "(";
        print_optimal_parens(s, i, s[i][j]);
        print_optimal_parens(s, s[i][j] + 1, j);
        cout << ")";
    }
}
int main() {
    vector<int> matrix_sizes = {3, 5, 1, 4, 10, 13, 12};
    vector<vector<int>> m, s;
    matrix_chain_order(matrix_sizes, m, s);
    cout << "Minimum number of scalar multiplications: " << m[1][matrix_sizes.size() - 1] << endl;
    cout << "Optimal Parenthesization: ";
    print_optimal_parens(s, 1, matrix_sizes.size() - 1);
    cout << endl;
    return 0;
}
