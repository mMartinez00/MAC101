#include <iostream>
#include <string>
using namespace std;

double fahToCel(double temp) {
    return (5.0 / 9.0) * (temp - 32.0);
}

double celToFah(double temp) {
    return (temp * 9.0 / 5.0) + 32.0;
}

int main () {
    string input;

    cout << "Input temperature: ";

    cin >> input;

    char unit = input.back(); // Last character
    unit = toupper(unit); // Convert it uppercase

    string numberPart = input.substr(0, input.size() - 1); // All but last character
    double temp = stod(numberPart); // Convert string -> double

    double result;
    char outputUnit;

    if(unit == 'C') {
        result = celToFah(temp); // F -> C
        outputUnit = 'F';
    } else if (unit == 'F') {
        result = fahToCel(temp); // C -> F
        outputUnit = 'C';
    }

    cout << result << outputUnit;

   

    return 0;
}