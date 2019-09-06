#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n, m, row = 1, column = 1;
    cin >> n >> m;
    
    int matrix[n][m];
    string word;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cin >> word;
    
    for (int a = 0; a < word.length(); a++) {
        if (word[a] == 'd') {
            row = row + 1;
        }
        else if (word[a] == 'u') {
            row = row - 1;
        }
        else if (word[a] == 'l') {
            column = column - 1;
        }
        else {
            column = column + 1;
        }
        
        if (matrix[row][column] == 1) {
            break;
        }
    }
    if (row == 1 && column == m - 1) {
        cout << "Right path!";
    }
    else {
        cout << "Wrong path!";
        return 0;
    }
    
    
    if (matrix[row][column == 1]) {
        cout << "Wrong path!";
    }
    
    
    
    
    
    
    
}
