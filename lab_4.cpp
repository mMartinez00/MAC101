#include <iostream>
using namespace std;

int main () {
    string location;

    cout << "Enter your location: ";
    getline(cin, location);

    if(location == "Canal St" || location == "Chambers St" || location == "Fulton St"  ) {
        if (location == "Canal St") {
            cout << "This is Lower Manhattan" << endl;
        } else if (location == "Chambers St" )
        {
             cout << "This is Tribeca" << endl;
        } else if (location == "Fulton St") {
            cout << "This is Financial District" << endl;
        }
        
    } else {
        int num = stoi(location);

        if(num > 207){
            cout << "The subway doesn't reach that far!" <<endl;
        } else if (num <= 207 && num > 190) {
            cout << "You're in Inwood - the very top of Manhattan!" << endl;
        } else if (num <= 190 && num > 181) {
            cout << "You're in Upper Manhattan" << endl;
        } else if (num <= 181 && num > 168) {
            cout << "Welcome to Washington Heights!" << endl;
        } else if (num <= 168 && num > 145) {
            cout << "Welcome to Harlem!" << endl;
        } else if (num <= 145 && num > 125) {
            cout << "You're in Central Harlem" << endl;
        } else if (num <= 125 && num > 59) {
            cout << "This Upper West Side!" << endl;
        } else if (num <= 59 && num > 50) {
            cout << "You're in Central Park West" << endl;
        } else if (num <= 50 && num > 42) {
            cout << "You're in Hells Kitchen" << endl;
        } else if ( num <= 42 && num > 34) {
            cout << "The busy streets of Midtown Manhattan" << endl;
        } else if (num <= 34 && num > 23) {
            cout << "This is Midtown West" << endl;
        } else if (num <= 23 && num > 14) {
            cout << "Welcome to Chelsea" << endl;
        } else if (num <= 14 && num > 4) {
            cout << "Welcome to Greenwich Village" << endl;
        } else if (num <= 4 && num > 0) {
            cout << "This West Village" << endl;
        } else if(num < 0) {
            cout << "You're lost!!" << endl;
        }
    }

    return 0;
}