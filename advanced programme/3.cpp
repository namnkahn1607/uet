// adv-programme.3
#include <iostream>
#include <vector>
using namespace std;

const int directs[8][2] = {
    {-1, -1}, {-1, 0}, {-1, 1},
    {0, -1},           {0, 1},
    {1, -1}, {1, 0}, {1, 1}
};

class cpp {
public:
    static void solve(vector<vector<char>> &mine) {
        int row = mine.size(), col = mine[0].size();

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (mine[i][j] == '.') {
                    int x = 0;

                    for (const auto &dir : directs) {
                        int newI = i + dir[0], newJ = j + dir[1];

                        if (0 <= newI and newI < row and
                            0 <= newJ and newJ < col)
                            x += (mine[newI][newJ] == '*') ? 1 : 0;
                    }

                    mine[i][j] = char(x + '0');
                }
            }
        }
    }
};

int main() {
    int row, col;
    cin >> row >> col;
    vector<vector<char>> mine(row, vector<char>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            cin >> mine[i][j];
    }

    cpp::solve(mine);

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            cout << mine[i][j] << ' ';
        
        cout << '\n';
    }

    return 0;
}