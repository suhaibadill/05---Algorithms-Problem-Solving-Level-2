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

int getNumberReversed(int number) {

    int remainder = 0;
    int number2 = 0;
    while (number > 0) {

        remainder = number % 10;
        number2 = number2 * 10 + remainder;
        number /= 10;
    }
    return number2;
}
//or:-
bool IsPalindromeNumber(int number)
{
    return number == getNumberReversed(number);

}

//void printPalindromeOrNotPalindromeNumber(int number) {
//
//    if (getNumberReversed(number) == number)
//        cout << "\nYes, it is a palindrome number" << endl;             //My code
//    else
//        cout << "\nNo, it is NOT a palindrome number" << endl;
//
//}
int main()
{
    /*printPalindromeOrNotPalindromeNumber(readPositiveNumber("Please enter your number"));*/  //My code
    int number = (readPositiveNumber("Please enter your number"));
    if (IsPalindromeNumber(number) == number)
        cout << "\nYes, it is a palindrome number" << endl;
    else
        cout << "\nNo, it is NOT a palindrome number" << endl;
    return 0;
}