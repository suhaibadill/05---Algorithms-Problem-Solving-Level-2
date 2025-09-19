#include <iostream>
using namespace std;
enum enPerfectOrNotPerfect{perfect = 1, Notperfect = 2};

int readPositiveNumber(string message) {

    int number;
    do {

        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

enPerfectOrNotPerfect checkPerfectOrNotPerfect(int number) {

    int sum = 0;

    for (int i = 1; i < number; i++) {

        if ((number % i == 0)) {
            sum += i;
        }
    }

    if (sum == number)
        return enPerfectOrNotPerfect::perfect;
    else
        return enPerfectOrNotPerfect::Notperfect;
}

void printPerfectOrNotPerfect(int number) {

    if (checkPerfectOrNotPerfect(number) == enPerfectOrNotPerfect::perfect)
        cout << number << " is perfect" << endl;
    else
        cout << number << " is not perfect" << endl;

}
int main()
{
    printPerfectOrNotPerfect(readPositiveNumber("Please enter a number"));

    return 0;
}