#include <iostream>
using namespace std;

int main () {
    int riders;
    double total = 0;

    cout << "Enter the number of riders: ";
    cin >> riders;

    for(int swipe = 1; swipe <= riders; swipe++) {
        if(swipe % 3 == 0) {
            total = total + 0;
        } else if (swipe % 5 == 0) {
            total = total + 1.45;
        } else {
            total = total + 2.90;
        }
    }

    cout << total;

    return 0;
} 