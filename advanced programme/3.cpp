// adv-programme.3
#include <iostream>
#include <vector>
using namespace std;

class cpp {
public:
    static void solve(vector<vector<char>> &mine) {
        int row = mine.size(), col = mine[0].size();

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (mine[i][j] == '.') {
                    int x = 0;


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