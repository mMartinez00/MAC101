#include <iostream>
using namespace std;

int main () {
    int number = 42;    // Regular integar variable
    int* ptr = &number; // Pointer that stores the memory address of 'number'

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value stored in ptr (address): " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    *ptr = 100;
    cout << "New value of number after modification through pointer: " << number << endl;

    return 0;
}