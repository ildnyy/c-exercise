// 剑指 Offer 29. 顺时针打印矩阵
// 输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        vector<int> res;
        int l = 0;  // 左
        int r = matrix[0].size() - 1;  // 右
        int t = 0;  // 上
        int b = matrix.size() - 1;  // 下

        while(true) {
            for (int i = l; i <= r; i++) {
                res.emplace_back(matrix[t][i]);
            }
            if (++t > b) break;

            for (int i = t; i <= b; i++) {
                res.emplace_back(matrix[i][r]);
            }
            if (l > --r) break;

            for (int i = r; i >= l; i--) {
                res.emplace_back(matrix[b][i]);
            }
            if (t > --b) break;

            for (int i = b; i >= t; i--) {
                res.emplace_back(matrix[i][l]);
            }
            if (++l > r) break;
        }
        return res;
    }
};