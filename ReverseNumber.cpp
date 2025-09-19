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

int printNumberReversed(int number) {

    int remainder = 0;
    int number2 = 0;

    while (number > 0) {

        remainder = number % 10;
        number2 = number2 * 10 + remainder;
        number /= 10;
    }
    return number2;
}


int main()
{
    cout << "Reverced number = " << printNumberReversed(readPositiveNumber("please enter a number"));

    return 0;
}