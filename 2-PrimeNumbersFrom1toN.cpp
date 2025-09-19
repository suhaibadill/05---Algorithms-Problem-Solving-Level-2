#include <iostream>
using namespace std;

enum enPrimeOrNotPrimeNumber { prim = 1, notPrime = 2 };

int readPositiveNumber(string message) {

    int number;
    do {

        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}
enPrimeOrNotPrimeNumber primOrNotPrime(int number) {

    int m = round(number / 2);

    for (int counter = 2; counter <= m; counter++) {

        if (number % counter == 0)
            return enPrimeOrNotPrimeNumber::notPrime;

    }

    return enPrimeOrNotPrimeNumber::prim;
}

void printPrimeNumbersFrom1toN(int number) {

    cout << "The prime numbers from " << 1 << " to " <<  number  << " are: " << endl;

    for (int i = 1; i <= number; i++) {
        
        if (primOrNotPrime(i) == enPrimeOrNotPrimeNumber::prim)
        {
        
            cout << i << endl;
        }
    }
}

int main()
{
    printPrimeNumbersFrom1toN(readPositiveNumber("Plaese enter a positive number"));

    return 0;
}
