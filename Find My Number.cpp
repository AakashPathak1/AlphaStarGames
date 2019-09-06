#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    
    int guess = 50;
    int tries = 0;
    int feedback;
    int lbound = 0;
    int hbound = 101;
    cout << "Please think of a number between 1 and 100" << endl;
    cout << "I will try to guess your number!" << endl;
    
    while (feedback != 9) {
        cout << "Please enter '0' if your number is smaller, '1' if it is greater and '9' if I got it!" << endl;
        cout << "My guess is : " << guess << endl;
        cin >> feedback;
        tries++;
        
        
            
        
        if (feedback == 0) {
            hbound = guess;
            guess = lbound + ((hbound - lbound) / 2);
            continue;
        }
        else if (feedback == 1) {
            lbound = guess;

            guess = lbound + ((hbound - lbound) / 2);
        }
        else if (feedback == 9) {
            break;
        }
        else {
            tries--;
            continue;
        }
    }
    cout << "Yay I got your number in "<< tries << " tries" << endl;
    
}
