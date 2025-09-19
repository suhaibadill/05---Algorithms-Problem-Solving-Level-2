#include <iostream>
using namespace std;
enum enPerfectOrNotPerfect { perfect = 1, Notperfect = 2 };

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

void printPerfectOrNotPerfectfrom1toN(int number) {

    cout << "\nThe perfect numbers from " << 1 << " to " << number << " are:" << endl;

    for (int i = 1; i <= number; i++) {

        if (checkPerfectOrNotPerfect(i) == enPerfectOrNotPerfect::perfect)
            cout << i << " is perfect number" << endl;
    }

}
int main()
{
    printPerfectOrNotPerfectfrom1toN(readPositiveNumber("Please enter a number"));

    return 0;
}