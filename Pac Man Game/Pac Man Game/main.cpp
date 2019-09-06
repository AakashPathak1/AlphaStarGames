#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <curses.h>
using namespace std;

int main() {
    system("stty -echo"); // supress echo
    system("stty cbreak"); // go to RAW mode
    ifstream fin("pacman.txt");
    
    int n;
    bool dots = true;
    fin >> n;
    int m1row = 1, m1col = 1, m2row = 2, m2col = 14, m3row = 5, m3col = 17, m4row = 6, m4col = 12, dir;
    //srand(time(NULL));
    cout << "This is the pacman game!" << endl;
    int gems = 0;
    
    int Prow = 1, Pcol = 9, Ecol = 17, Erow = n - 2;
    char input;
    
    char matrix[n][20];
    
    
    
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < 20; b++) {
            fin >> matrix[a][b];
        }
       
    }
    
    while (((Pcol != Ecol || Prow != Erow) || gems < 4) && dots == true) {
        dir = rand() % 3;
        for (int a = 0; a < n; a++) {
            for (int b = 0; b < 20; b++) { // Printing the board
                cout << matrix[a][b];
            }
            cout << endl;
        }
        
        cout << endl;
        
        if (dir == 0) {
            if (matrix[m1row][m1col + 1] == '.' || matrix[m1row][m1col + 1] == '.') {
                matrix[m1row][m1col + 1] = 'M';
                matrix[m1row][m1col] = ' ';
                m1col++;
            }
            if (matrix[m2row][m2col + 1] == '.' || matrix[m2row][m2col + 1] == ' ') {
                matrix[m2row][m2col + 1] = 'M';
                matrix[m2row][m2col] = ' ';
                m2col++;
                
            }
            if (matrix[m3row][m3col + 1] == '.' || matrix[m3row][m3col + 1] == ' ') {
                matrix[m3row][m3col + 1] = 'M';
                matrix[m3row][m3col] = ' ';
                m3col++;
            }
            if (matrix[m4row][m4col + 1] == '.' || matrix[m4row][m4col + 1] == ' ') {
                matrix[m4row][m4col + 1] = 'M';
                matrix[m4row][m4col] = ' ';
                m4col++;
            }
        }
        else if (dir == 1) {
            if (matrix[m1row - 1][m1col] == '.' || matrix[m1row - 1][m1col] == ' ') {
                matrix[m1row - 1][m1col] = 'M';
                matrix[m1row][m1col] = ' ';
                m1row--;
            }
            if (matrix[m2row - 1][m2col] == '.' || matrix[m2row - 1][m2col] == ' ') {
                matrix[m2row - 1][m2col] = 'M';
                matrix[m2row][m2col] = ' ';
                m2row--;
                
            }
            if (matrix[m3row - 1][m3col] == '.' || matrix[m3row - 1][m3col] == ' ') {
                matrix[m3row - 1][m3col] = 'M';
                matrix[m3row][m3col] = ' ';
                m3row--;
            }
            if (matrix[m4row - 1][m4col] == '.' || matrix[m4row - 1][m4col] == ' ') {
                matrix[m4row - 1][m4col] = 'M';
                matrix[m4row][m4col] = ' ';
                m4row--;
            }
        }
        else if (dir == 2) {
            if (matrix[m1row][m1col - 1] == '.' || matrix[m1row][m1col - 1] == ' ') {
                matrix[m1row][m1col - 1] = 'M';
                matrix[m1row][m1col] = ' ';
                m1col--;
            }
            if (matrix[m2row][m2col - 1] == '.' || matrix[m2row][m2col - 1] == ' ') {
                matrix[m2row][m2col - 1] = 'M';
                matrix[m2row][m2col] = ' ';
                m2col--;
                
            }
            if (matrix[m3row][m3col - 1] == '.' || matrix[m3row][m3col - 1] == ' ') {
                matrix[m3row][m3col - 1] = 'M';
                matrix[m3row][m3col] = ' ';
                m3col--;
            }
            if (matrix[m4row][m4col - 1] == '.' || matrix[m4row][m4col - 1] == ' ') {
                matrix[m4row][m4col - 1] = 'M';
                matrix[m4row][m4col] = ' ';
                m4col--;
            }
        }
        else if (dir == 3) {
            if (matrix[m1row + 1][m1col] == '.' || matrix[m1row + 1][m1col] == ' ') {
                matrix[m1row + 1][m1col] = 'M';
                matrix[m1row][m1col] = ' ';
                m1row++;
            }
            if (matrix[m2row + 1][m2col] == '.' || matrix[m2row + 1][m2col] == ' ') {
                matrix[m2row + 1][m2col] = 'M';
                matrix[m2row][m2col] = ' ';
                m2row++;
                
            }
            if (matrix[m3row + 1][m3col] == '.' || matrix[m3row + 1][m3col] == ' ') {
                matrix[m3row + 1][m3col] = 'M';
                matrix[m3row][m3col] = ' ';
                m3row++;
            }
            if (matrix[m4row + 1][m4col] == '.' || matrix[m4row + 1][m4col] == ' ') {
                matrix[m4row + 1][m4col] = 'M';
                matrix[m4row][m4col] = ' ';
                m4row++;
            }
        }
        
        cout << "Use WASD to make your move, or Q to quit" << endl;
        input = getchar();
        

        if (input == 'q') {
            cout << "You have quit" << endl;
            return 0;
        }
        if (input == 'w') {
            if (matrix[Prow - 1][Pcol] == '.' || matrix[Prow - 1][Pcol] == ' ') {
                matrix[Prow][Pcol] = ' ';
                matrix[Prow - 1][Pcol] = 'v';
                Prow--;
                
                continue;
            }
            else if (matrix[Prow - 1][Pcol] == '#') {
                cout << "Invalid Move" << endl;
                continue;
            }
            else if (matrix[Prow - 1][Pcol] == 'G') {
                gems++;
                matrix[Prow][Pcol] = '.';
                matrix[Prow - 1][Pcol] = 'v';
                Prow--;
            }
            else if (matrix[Prow - 1][Pcol] == 'M') {
                cout << "You ran into a monster!" << endl;
                cout << "Game over" << endl;
                return 0;
            }
            else if (matrix[Prow - 1][Pcol] == 'E') {
                if (gems < 4 || dots == true) {
                    cout << endl;
                    cout << "Get more gems!!!!" << endl;
                    cout << endl;
                    continue;
                }
                else {
                    break;
                }
            }
                
        }
         else if (input == 'a') {
            if (matrix[Prow][Pcol - 1] == '.' || matrix[Prow][Pcol - 1] == ' ') {
                matrix[Prow][Pcol] = ' ';
                matrix[Prow][Pcol - 1] = '>';
                Pcol--;
                
                continue;
            }
            else if (matrix[Prow][Pcol - 1] == '#') {
                cout << "Invalid Move" << endl;
                continue;
            }
            else if (matrix[Prow][Pcol - 1] == 'G') {
                gems++;
                matrix[Prow][Pcol] = '.';
                matrix[Prow][Pcol - 1] = '>';
                Pcol--;
            }
            else if (matrix[Prow][Pcol - 1] == 'M') {
                cout << "You ran into a monster!" << endl;
                cout << "Game over" << endl;
                return 0;
            }
            else if (matrix[Prow][Pcol - 1] == 'E') {
                if (gems < 4 || dots == true) {
                    cout << endl;
                    cout << "Get more gems!!!!" << endl;
                    cout << endl;
                    continue;
                }
                else {
                    break;
                }
                
            }
        }
         else if (input == 'd') {
             if (matrix[Prow][Pcol + 1] == '.' || matrix[Prow][Pcol + 1] == ' ') {
                 matrix[Prow][Pcol] = ' ';
                 matrix[Prow][Pcol + 1] = '<';
                 Pcol++;
                
                 continue;
             }
             else if (matrix[Prow][Pcol + 1] == '#') {
                 cout << "Invalid Move" << endl;
                 continue;
             }
             else if (matrix[Prow][Pcol + 1] == 'G') {
                 gems++;
                 matrix[Prow][Pcol] = '.';
                 matrix[Prow][Pcol + 1] = '<';
                 Pcol++;
             }
             else if (matrix[Prow][Pcol + 1] == 'M') {
                 cout << "You ran into a monster" << endl;
                 cout << "Game over" << endl;
                 return 0;
             }
             else if (matrix[Prow][Pcol + 1] == 'E') {
                 if (gems < 4 || dots == true) {
                     cout << endl;
                     cout << "Get more gems!!!!" << endl;
                     cout << endl;
                     continue;
                 }
                 else {
                     break;
                 }
             }
         }
         else if (input == 's') {
             if (matrix[Prow + 1][Pcol] == '.' || matrix[Prow + 1][Pcol] == ' ') {
                 matrix[Prow][Pcol] = ' ';
                 matrix[Prow + 1][Pcol] = '^';
                 Prow++;
                 continue;
             }
             else if (matrix[Prow + 1][Pcol] == '#') {
                 cout << "Invalid Move" << endl;
                 cout << "Game over" << endl;
                 continue;
             }
             else if (matrix[Prow + 1][Pcol] == 'G') {
                 gems++;
                 matrix[Prow][Pcol] = '.';
                 matrix[Prow + 1][Pcol] = '^';
                 Prow++;
             }
             else if (matrix[Prow + 1][Pcol] == 'M') {
                 cout << "You ran into a monster" << endl;
                 return 0;
             }
             else if (matrix[Prow][Pcol + 1] == 'E') {
                 if (gems < 4 || dots == true) {
                     cout << endl;
                     cout << "Get more gems!!!!" << endl;
                     cout << endl;
                     continue;
                 }
                 else {
                     break;
                 }
             }
         }
         else {
             cout << "Invalid Move" << endl;
             
             continue;
         }
        dots = true;
        for (int a = 0; a < n; a++) {
            for (int b = 0; b < 20; b++) { // Printing the board
                if (matrix[a][b] == '.') {
                    dots = false;
                }
            }
            cout << endl;
        }
        
        
        
        
    }
    
    system("stty -echo"); // supress echo
    system("stty cbreak"); // go to RAW mode
    
    cout << "You won!!" << endl;
    
    
}
