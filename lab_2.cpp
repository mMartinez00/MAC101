#include <iostream>
using namespace std;

int main () {
    string name;
    string college;
    string sport;

    cout << "Hello, what is your name? ";
    getline(cin, name);

    cout << "What is your college? ";
    getline(cin, college);

    cout << "What is your favorite sport? ";
    getline(cin, sport);

    cout << "Hi my name is " + name + ", I am currently majoring in Computer Science at " + college + ". And my favorite sport is " + sport + ".";

    return 0;
}