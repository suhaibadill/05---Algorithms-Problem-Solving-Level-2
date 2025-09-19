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

int maxNumberOnTheArray(int arr[100], int arrLength) {

    int max = 0;
    for (int i = 0; i < arrLength; i++) {
        

        if (arr[i] > max) {

            max = arr[i];
        }

    }
    return max;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    getArrayElements(arr, arrLength);

    cout << "\nArray Elements: ";
    printArrayElements(arr, arrLength);
    cout << "Max Number is: " << maxNumberOnTheArray(arr, arrLength) << endl;

    return 0;
}