#include <iostream>
#include <cstdlib>

using namespace std;
enum enPrimeOrNotPrimeNumber { prim = 1, notPrime = 2 };

int randomNumber(int from, int to) {

    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void getArrayElements(int arr[100], int& arrLength) {

    cout << "Enter how many elments do you want?\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = randomNumber(1, 100);

    }
}

void printArrayElements(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
}

enPrimeOrNotPrimeNumber primOrNotPrime(int number) {

    int m = round(number / 2);

    for (int counter = 2; counter <= m; counter++) {

        if (number % counter == 0)
            return enPrimeOrNotPrimeNumber::notPrime;

    }

    return enPrimeOrNotPrimeNumber::prim;
}

void copyOnlyPrimaryNumbers(int arrSource[100], int arrDectenation[100], int arrLength, int &arr2Length) {

    int counter = 0;
    for (int i = 0; i < arrLength; i++) {

        if (primOrNotPrime(arrSource[i]) == enPrimeOrNotPrimeNumber::prim) {

            arrDectenation[counter] = arrSource[i];
            counter++;
        }
    }
    arr2Length = --counter;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arrLength;

    getArrayElements(arr1, arrLength);

    int arr2[100];
    int arr2Length;
    copyOnlyPrimaryNumbers(arr1, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    printArrayElements(arr1, arrLength);

    cout << "\nPrime Numbers in Array2:\n";
    printArrayElements(arr2, arr2Length);


    return 0;
}