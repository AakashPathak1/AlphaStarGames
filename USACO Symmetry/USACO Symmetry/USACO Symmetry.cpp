#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int n, m, ans = 1, prev = 0, counter = 0;
    cin >> n >> m;
    
    if (n%2 == 0 || m%2 == 0) {
        ans = 0;
    }
    else {
        ans = 1;
    }
    
    while (n != 1 || m != 1) {
        if (n%2 == 0 || m%2 == 0) {
            break;
        }
        else {
            n = (n - 1) / 2;
            m = (m - 1) / 2;
            counter++;
            
        }
        
    }
    for (int i = 0; i < counter; i++) {
        ans = pow (4, i);
        prev = ans + prev;
    }
    cout << prev << endl;
}
