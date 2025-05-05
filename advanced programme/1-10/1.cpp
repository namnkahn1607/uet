// adv-programme.1
#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    int grid[row][col];

    int top = 0, bottom = row - 1,
        left = 0, right = col - 1;
    
    int num = 0;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i)
            grid[top][i] = ++num;
        
        ++top;
        
        for (int i = top; i <= bottom; ++i)
            grid[i][right] = ++num;
        
        --right;
        
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
                grid[bottom][i] = ++num;
            
            --bottom;
        }
    
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                grid[i][left] = ++num;
            
            ++left;
        }
    }
    
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            cout << grid[i][j] << ' ';
        
        cout << '\n';
    }
    
    return 0;
}