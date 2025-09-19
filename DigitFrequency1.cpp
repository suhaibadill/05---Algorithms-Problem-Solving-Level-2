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
short readDigit(string message) {

    short digit;
    do {
        cout << message << endl;
        cin >> digit;
    } while (digit < 0 || digit > 9);
    return digit;
}

int frequencyDigit(int number, short digit) {

    int remainder = 0;
    int counter = 0;

    while (number > 0) {

        remainder = number % 10;

        if (remainder == digit) {
            counter++;
        }
        number /= 10;
    }
    return counter;
}


int main()
{
    int number = readPositiveNumber("Plaese enter a number");
    short digit = readDigit("Plaese enter a digit");

    cout << "Digit " << digit << " frequency is " << frequencyDigit(number, digit) << " time(s)" << endl;
    return 0;
}