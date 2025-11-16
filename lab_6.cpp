#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void inputData(string& name, string& grade, string students[], int& array_size) {

    for(int i = 0; i < array_size; i++) {
        cout << "Input student name: ";
        getline(cin, name);
        cout << "Input " + name + " grade: ";
        getline(cin, grade);

        students[i] = "Name: " + name + " " +  "Grade: " + grade;
    }
}

int main () {
    string students[5];
    string name;
    string grade;
    int array_size = sizeof(students) / sizeof(students[0]);

    // Store userinput in array
    inputData(name, grade, students, array_size);

    // Create students.txt file
    ofstream outputFile;
    outputFile.open("students.txt");

    // If no file exist
    if(!outputFile.is_open()) {
        cerr << "Error opening file!";
        return 1;
    }

    // Write to students.txt file
    for(int i = 0; i < array_size; i++) {
        outputFile << students[i] << endl;
    }

    outputFile.close();

    return 0;
}