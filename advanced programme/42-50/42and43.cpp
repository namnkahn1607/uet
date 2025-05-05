// adv-programme.42 & 43
#include <iostream>
#include <vector>
using namespace std;

const int directs[4][2] = {
    {-1, 0}, {0, 1}, {1, 0}, {0, -1}
};

int peakCount(vector<vector<int>> &grid) {
    int row = grid.size(), col = grid[0].size();
    int ans = 0;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            bool peak = true;

            for (const auto &dir : directs) {
                int newI = i + dir[0], newJ = j + dir[1];

                if (0 <= newI and newI < row and 0 <= newJ and newJ < col) {
                    if (grid[newI][newJ] >= grid[i][j])
                        peak = false;
                }
            }

            ans += (peak) ? 1 : 0;
        }
    }

    return ans;
}

int main() {
    int row, col; cin >> row >> col;
    vector<vector<int>> grid(row, vector<int>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            cin >> grid[i][j];
    }

    int ans = peakCount(grid);

    cout << ans << endl;

    return 0;
}