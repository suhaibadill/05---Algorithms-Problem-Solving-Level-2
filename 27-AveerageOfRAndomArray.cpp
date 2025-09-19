#include <iostream>
#include <cstdlib>

using namespace std;

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

int sumNumberOnTheArray(int arr[100], int arrLength) {

    int sum = 0;
    for (int i = 0; i < arrLength; i++) {

        sum += arr[i];
    }
    return sum;
}

float averageOfAllNumbersOnArray(int arr[100], int arrLength) {

    float averageOfAllNumbers = (float)sumNumberOnTheArray(arr, arrLength) / arrLength;

    return averageOfAllNumbers;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    getArrayElements(arr, arrLength);

    cout << "\nArray Elements: ";
    printArrayElements(arr, arrLength);
    cout << "Average Of All Numbers is: " << averageOfAllNumbersOnArray(arr, arrLength) << endl;

    return 0;
}
