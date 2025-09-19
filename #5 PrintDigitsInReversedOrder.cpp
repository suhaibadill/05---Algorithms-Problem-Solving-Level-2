#include <iostream>
using namespace std;

int readPositiveNumber(string message) {

    int number;
    do {

        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

void printNumberReversed(int number) {

    int remainder = 0;

    while (number > 0) {

        remainder = number % 10;
        cout << remainder << endl;;
        number /= 10;
    }
    
}


int main()
{
    printNumberReversed(readPositiveNumber("please enter a number"));

    return 0;
