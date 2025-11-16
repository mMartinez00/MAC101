#include <iostream>
#include <string>
using namespace std;

int fahToCel(int temp) {
    const double cel = 5/9*(temp - 32);

    return cel;
}

int celToFah(int temp) {
    const double fah = (temp * 9/5) + 32;

    return fah;
}

int main () {
    string input;
    string subStrngCel = "C";
    string subStrngFah = "F";

    cout << "Input temperature: ";

    cin >> input;

    bool isCel = input.find(subStrngCel) != string::npos;

    int result;

    if(isCel) {
        double temp = stoi(input);

        result = fahToCel(temp);
    } else {
        double temp = stoi(input);

        result = celToFah(temp);
    }

    cout << result;

    return 0;
}