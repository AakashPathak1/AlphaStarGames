#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
     char matrix[3][3];
    int p1r, p1c, p2r, p2c, turn = 1, check = 0, win = 0;
    char lv[3] = {matrix[0][0], matrix[1][0], matrix[2][0]};
    char mv[3] = {matrix[0][1], matrix[1][1], matrix[2][1]};
    char rv[3] = {matrix[0][2], matrix[1][2], matrix[2][2]};
    char uh[3] = {matrix[0][0], matrix[0][1], matrix[0][2]};
    char mh[3] = {matrix[1][0], matrix[1][1], matrix[1][2]};
    char dh[3] = {matrix[2][0], matrix[2][1], matrix[2][2]};
    char ld[3] = {matrix[0][0], matrix[1][1], matrix[2][2]};
    char rd[3] = {matrix[0][2], matrix[1][1], matrix[2][0]};
    
   
    bool completed = false;
    
    cout << "This is a game of tic tac toe!" << endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = '-';
        }
    }
    
    
    while(completed == false) {
        cout << "The board is : " << endl;
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matrix[i][j];
            }
            cout << endl;
        }
        
        if (turn == 1) {
            cout << "Player 1, Enter 2 digits between 1 and 3 to indicate the row and column of where you want to play" << endl;
            cin >> p1r >> p1c;
            if (p1r <= 3 && p1r > 0 && p1c <= 3 && p1c > 0 && matrix[p1r - 1][p1c - 1] == '-') {
                matrix[p1r - 1][p1c - 1] = 'X';
                turn = 2;
                check++;
            } else {
                cout << "Please enter 2 numbers between 1 and 3" << endl;
            }
        }
        
        cout << "The board is : " << endl;
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matrix[i][j];
            }
            cout << endl;
        }
        
        lv[0] = matrix[0][0]; lv[1] =  matrix[1][0]; lv[2] =  matrix[2][0];
        mv[0] = matrix[0][1]; mv[1] =  matrix[1][1]; mv[2] =  matrix[2][1];
        rv[0] = matrix[0][2]; rv[1] =  matrix[1][2]; rv[2] =  matrix[2][2];
        uh[0] = matrix[0][0]; uh[1] =  matrix[0][1]; uh[2] =  matrix[0][2];
        mh[0] = matrix[1][0]; mh[1] =  matrix[1][1]; mh[2] =  matrix[1][2];
        dh[0] = matrix[2][0]; dh[1] =  matrix[2][1]; dh[2] =  matrix[2][2];
        ld[0] = matrix[0][0]; ld[1] =  matrix[1][1]; ld[2] =  matrix[2][2];
        rd[0] = matrix[0][2]; rd[1] =  matrix[1][1]; rd[2] =  matrix[2][0];
        
        if (lv[0] == 'X' && lv[1] == 'X' && lv[2] == 'X') {
            completed = true;
            win = 1;
        }
        else if (mv[0] == 'X' && mv[1] == 'X' && mv[2] == 'X') {
            completed = true;
            win = 1;
        }
        else if (rv[0] == 'X' && rv[1] == 'X' && rv[2] == 'X') {
            completed = true;
            win = 1;
        }
        else if (uh[0] == 'X' && uh[1] == 'X' && uh[2] == 'X') {
            completed = true;
            win = 1;
        }
        else if (mh[0] == 'X' && mh[1] == 'X' && mh[2] == 'X') {
            completed = true;
            win = 1;
        }
        else if (dh[0] == 'X' && dh[1] == 'X' && dh[2] == 'X') {
            completed = true;
            win = 1;
        }
        else if (ld[0] == 'X' && ld[1] == 'X' && ld[2] == 'X') {
            completed = true;
            win = 1;
        }
        else if (rd[0] == 'X' && rd[1] == 'X' && rd[2] == 'X') {
            completed = true;
            win = 1;
        }
        //////////////////
        else if (lv[0] == 'O' && lv[1] == 'O' && lv[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (mv[0] == 'O' && mv[1] == 'O' && mv[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (rv[0] == 'O' && rv[1] == 'O' && rv[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (uh[0] == 'O' && uh[1] == 'O' && uh[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (mh[0] == 'O' && mh[1] == 'O' && mh[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (dh[0] == 'O' && dh[1] == 'O' && dh[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (ld[0] == 'O' && ld[1] == 'O' && ld[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (rd[0] == 'O' && rd[1] == 'O' && rd[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (check == 9) {
            cout << "Game has ended in a tie" << endl;
            return 0;
        }
        
        if (completed == true) {
            break;
        }
        
        if (turn == 2) {
            cout << "Player 2, Enter 2 digits between 1 and 3 to indicate the row and column of where you want to play" << endl;
            cin >> p2r >> p2c;
            if (p2r <= 3 && p2r > 0 && p2c <= 3 && p2c > 0 && matrix[p2r - 1][p2c - 1] == '-') {
                matrix[p2r - 1][p2c - 1] = 'O';
                turn = 1;
                check++;
            } else {
                cout << "Please enter 2 numbers between 1 and 3" << endl;
            }
        }
        
        
        
        
        lv[0] = matrix[0][0]; lv[1] =  matrix[1][0]; lv[2] =  matrix[2][0];
        mv[0] = matrix[0][1]; mv[1] =  matrix[1][1]; mv[2] =  matrix[2][1];
        rv[0] = matrix[0][2]; rv[1] =  matrix[1][2]; rv[2] =  matrix[2][2];
        uh[0] = matrix[0][0]; uh[1] =  matrix[0][1]; uh[2] =  matrix[0][2];
        mh[0] = matrix[1][0]; mh[1] =  matrix[1][1]; mh[2] =  matrix[1][2];
        dh[0] = matrix[2][0]; dh[1] =  matrix[2][1]; dh[2] =  matrix[2][2];
        ld[0] = matrix[0][0]; ld[1] =  matrix[1][1]; ld[2] =  matrix[2][2];
        rd[0] = matrix[0][2]; rd[1] =  matrix[1][1]; rd[2] =  matrix[2][0];
        
        if (lv[0] == 'X' && lv[1] == 'X' && lv[2] == 'X') {
            completed = true;
            win = 1;
        }
         else if (mv[0] == 'X' && mv[1] == 'X' && mv[2] == 'X') {
            completed = true;
             win = 1;
        }
         else if (rv[0] == 'X' && rv[1] == 'X' && rv[2] == 'X') {
             completed = true;
             win = 1;
         }
         else if (uh[0] == 'X' && uh[1] == 'X' && uh[2] == 'X') {
             completed = true;
             win = 1;
         }
         else if (mh[0] == 'X' && mh[1] == 'X' && mh[2] == 'X') {
             completed = true;
             win = 1;
         }
         else if (dh[0] == 'X' && dh[1] == 'X' && dh[2] == 'X') {
             completed = true;
             win = 1;
         }
         else if (ld[0] == 'X' && ld[1] == 'X' && ld[2] == 'X') {
             completed = true;
             win = 1;
         }
         else if (rd[0] == 'X' && rd[1] == 'X' && rd[2] == 'X') {
             completed = true;
             win = 1;
         }
        //////////////////
         else if (lv[0] == 'O' && lv[1] == 'O' && lv[2] == 'O') {
            completed = true;
             win = 2;
        }
        else if (mv[0] == 'O' && mv[1] == 'O' && mv[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (rv[0] == 'O' && rv[1] == 'O' && rv[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (uh[0] == 'O' && uh[1] == 'O' && uh[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (mh[0] == 'O' && mh[1] == 'O' && mh[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (dh[0] == 'O' && dh[1] == 'O' && dh[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (ld[0] == 'O' && ld[1] == 'O' && ld[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (rd[0] == 'O' && rd[1] == 'O' && rd[2] == 'O') {
            completed = true;
            win = 2;
        }
        else if (check == 9) {
            cout << "Game has ended in a tie" << endl;
            return 0;
        }
    }
    
    if (win == 1) {
        cout << "Player 1 wins" << endl;
    }
    else if (win == 2) {
        cout << "Player 2 wins" << endl;
        
    }
    
    
    
}
