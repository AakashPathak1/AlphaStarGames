//
//  main.cpp
//  Matches project
//
//  Created by Aakash Pathak on 7/25/18.
//  Copyright © 2018 Aakash Pathak. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    int r = rand()%3 + 1;
    int n;
    
    int p2;
    int t = 0;
    cout << "Pick the total amount of matches" << endl;
    cin >> n;
    while (n > 0) {
        
        cout << "There are " << n << " matches left" << endl;
        for (int i = 0; i < n; i++) {
            cout << "|";
        }
        cout << endl;

        cout << "The computer selects " << r << " matches to play" << endl;
        n = n - r;
        t = 1;
        
        cout << "There are " << n << " matches left" << endl;
        for (int i = 0; i < n; i++) {
            cout << "|";
            
        }
        cout << endl;
        
        if (t == 1) {
            cout << "Player 2, Enter the desired matches" << endl;
            cin >> p2;
            
            if (p2 != 1 && p2 != 2 && p2 != 3) {
                cout << "Enter a number between 1 and 3" << endl;
                
                continue;
            }
            else {
                n = n - p2;
                t = 0;
            }
            
        }
        
    }
    if (t == 0) {
        cout << "Player 2 wins" << endl;
    }
    else {
        cout << "Computer wins" << endl;
    }
    
    
    
    
    
}
