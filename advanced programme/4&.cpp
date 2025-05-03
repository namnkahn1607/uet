// adv-programme.4
#include <iostream>
#include <vector>
using namespace std;

void game(vector<vector<char>> &mp) {

}

int main() {
    int row, col, num;
    cin >> row >> col >> num;
    vector<vector<char>> mp(row, vector<char>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            cin >> mp[i][j];
    }

    int xpos, ypos;

    while (cin >> xpos >> ypos)
        game();

    return 0;
}