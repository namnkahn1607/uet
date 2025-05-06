// adv-programme.4
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cntMines(const vector<string>& field, int x, int y, int m, int n) {
    int cnt = 0;

    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) continue;
            
            int nx = x + dx;
            int ny = y + dy;

            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                if (field[nx][ny] == 'M')
                    cnt++;
            }
        }
    }
    
    return cnt;
}


void printGameState(const vector<string> &field, const vector<vector<int>> &revealed, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (revealed[i][j] == -1)
                cout << "-1 ";
            else
                cout << revealed[i][j] << " ";
        }

        cout << '\n';
    }
}

int main() {
    int m, n, k; cin >> m >> n >> k;
    vector<string> field(m);
    
    for (int i = 0; i < m; i++)
        cin >> field[i];
    
    vector<vector<int>> revealed(m, vector<int>(n, -1));
    
    int x, y;

    while (cin >> x >> y) {
        if (field[x][y] == 'M') {
            cout << "YOU'RE DEAD!" << endl;
            
            for (int i = 0; i < m; i++) 
                cout << field[i] << endl;
            
            break;
        } else {
            revealed[x][y] = cntMines(field, x, y, m, n);
            printGameState(field, revealed, m, n);
        }
    }
    
    return 0;
}