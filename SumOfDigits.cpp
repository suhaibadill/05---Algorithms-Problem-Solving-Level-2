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

int sumDigits(int number) {

    int remainder = 0;
    int sum = 0;

    while (number > 0) {

        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }
    return sum;
}


int main()
{
    cout << "Sum of digits = " << sumDigits(readPositiveNumber("please enter a number"));
    cout << endl;
    return 0;
}