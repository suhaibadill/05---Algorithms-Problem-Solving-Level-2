#include <iostream>
using namespace std;

int readPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void readArrayElements(int arr[100], int &arrLength) {

    cout << "Enter number of elements:\n";
    cin >> arrLength;

    cout << "\nEnter array elements: \n";

    for (int i = 0; i < arrLength; i++) {

        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
   
}

void printArrayElements(int arr[100], int arrLenght) {

    for (int i = 0; i < arrLenght ; i++) {

        cout << " " << arr[i] << " ";
    }

}
int timesRepeated(int arr[100], int arrLenght, int numberToCheck) {

    int counter = 0;

    for (int i = 0; i < arrLenght; i++) {

        if (arr[i] == numberToCheck) {
            counter++;
        }
    }
    return counter;
}
int main()
{
    int arr[100];
    int arrLenght;
    int numberToCheck;

    readArrayElements(arr, arrLenght);

    numberToCheck = readPositiveNumber("Enter number to check:");

    cout << "\nOriginal array:";
    printArrayElements(arr, arrLenght);

    cout << "\nNumber " << numberToCheck;
    cout << " is repeated ";
    cout << timesRepeated(arr, arrLenght, numberToCheck) << " time(s)\n";

    return 0;
}