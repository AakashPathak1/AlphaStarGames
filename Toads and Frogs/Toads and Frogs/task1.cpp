#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int n, spacepos = 0;
    do {
     cout << "Enter the desired board size : ";
     cin >> n;
        if (n%2 == 0) {
            cout << "Invalid entry" << endl;
        }
    }
    while (n % 2 == 0);
    int board[n];
    board[n/2] = spacepos;
    
    for (int a = 0; a < spacepos; a++) {
        board[a] = 2;
    }
    for (int a = spacepos + 1; a < n; a++) {
        board[a] = 4;
    }
    
    cout << "The board is : " << endl;
    
    for (int i = 0; i < n; i++) {
        if (board[i] == 2) {
           cout << "T ";
        }
        else if (board[i] == 4){
            cout << "F ";
        }
        else {
            cout << "_ ";
        }
    }
    cout << endl;
    
    
    
    
    
}
