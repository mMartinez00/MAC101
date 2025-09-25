#include <iostream>
using namespace std;

int main() {
    string movie;
    string nba;
    string mvp;

    // First question
    cout << "What is your favorite movie?";

    getline(cin, movie);

    // Second question
    cout << "Who won the NBA in 2025?";

    getline(cin, nba);

    // Third question
    cout << "Who was the MVP?";

    cin >> mvp;

    // Answers
    cout << "/n --- Answers ---/n";
    cout << "My favorite movie is" << movie << endl;
    cout << "The champions are " << nba << endl;
    cout << "The MVP was: " << mvp << endl;

    return 0;
}