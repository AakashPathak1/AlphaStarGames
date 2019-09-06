#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    int n;
    cout << "This is the pennies game!" << endl;
    
    n = rand()%19 + 1;
    int no = n;
    int turn = 0;
    int counter = 0;
    int array[n];
    int num, p1ans, p2ans;
    
    cout << "Enter the values for each box" << endl;
    int p1  = 0, p2 = 0;
    while (counter < n) {
        num = rand()%20 + 11;
        array[counter] = num;
        counter++;
    }
    no = n;
    int count = n;
    
    do {
    cout << "Do you want to go first or second?" << endl;
    cout << "Type '1' to go first or '2' to go second" << endl;
    cin >> turn;
    } while (turn != 1 && turn != 2);
        
    
    while (count > 0) {
       
        count = count - 2;
        
        
        
        
        cout << "The board is : " << endl;
        for (int i = 0; i < n; i++) {
            if (array[i] == -1) {
                continue;
            }
            else {
                
                cout << array[i] << " ";
                
            }
        }
        
            cout << endl;
            cout << "Player 1 Score : " << p1 << endl;
            cout << "Computer Score : " << p2 << endl;
        
        if (turn == 1) {
            cout << "Player 1, Enter '1' to remove the left box, or '0' to remove the right box" << endl;
            cin >> p1ans;
        
            if (p1ans == 1) {
                
                for (int i = 0; i < n; i++) {
                    if (array[i] == -1) {
                        
                        continue;
                    }
                    else {
                        p1 = p1 + array[i];
                        array[i] = -1;
                        break;
                    }
                    
                }
                cout << "The board is : " << endl;
                for (int i = 0; i < n; i++) {
                    if (array[i] == -1) {
                        continue;
                    }
                    else {
                        
                        cout << array[i] << " ";
                        
                    }
                }
                cout << endl;
                            }
            else if (p1ans == 0) {
                for (int i = n - 1; i > 0; i--) {
                    if (array[i] == -1) {
                        
                        continue;
                    }
                    else {
                        p1 = p1 + array[i];
                        array[i] = -1;
                        break;
                    }
                    
                }
                cout << "The board is : " << endl;
                for (int i = 0; i < n; i++) {
                    if (array[i] == -1) {
                        continue;
                    }
                    else {
                        
                        cout << array[i] << " ";
                    }
                }
                cout << endl;
               
                
            }
            else {
                continue;
                
            
            }
        cout << "The board is : " << endl;
        for (int i = 0; i < n; i++) {
            if (array[i] == -1) {
                
                continue;
            }
            else {
                
                cout << array[i] << " ";
                
            }
            
            }
            turn = 2;
        }
        
        
            cout << endl;
            cout << "Player 1 Score : " << p1 << endl;
            cout << "Computer Score : " << p2 << endl;
        
        
        
        
        p2ans = rand()%2;
        if (p2ans == 1) {
            cout << "Computer chooses : Left" << endl;
        }
        else {
            cout << "Computer chooses : Right" << endl;
        }
        
        
        
        if (turn == 2) {
            if (p2ans == 1) {
                for (int i = 0; i < n; i++) {
                    if (array[i] == -1) {
                        continue;
                    }
                    else {
                        p2 = p2 + array[i];
                        array[i] = -1;
                        break;
                    }
                    
                }
                cout << "The board is : " << endl;
                for (int i = 0; i < n; i++) {
                    if (array[i] == -1) {
                        continue;
                    }
                    else {
                        
                        cout << array[i] << " ";
                    }
                }
                cout << endl;
            }
        
            else if (p2ans == 0) {
                for (int i = n - 1; i > 0; i--) {
                    if (array[i] == -1) {
                        continue;
                    }
                    else {
                        p2 = p2 + array[i];
                        array[i] = -1;
                        break;
                    }
                    
                }
                cout << "The board is : " << endl;
                for (int i = 0; i < n; i++) {
                    if (array[i] == -1) {
                        continue;
                    }
                    else {
                        
                        cout << array[i] << " ";
                    }
                }
                
                cout << endl;
            }
            else {
                continue;
                
            }
            turn = 1;
    
            }
        }
        if (p1 > p2) {
            cout << "Player 1 won!" << endl;
        }
        else if (p2 > p1) {
            cout << "Computer won" << endl;
        }
        else {
            cout << "Its a tie" << endl;
        }
    
}
    
    
    
    

