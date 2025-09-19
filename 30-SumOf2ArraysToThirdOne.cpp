#include <iostream>
#include <cstdlib>

using namespace std;

int readPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the number entered by the user.
    } while (Number <= 0);        // Continue prompting if the number is not positive.

    return Number;  // Return the validated positive number.
}
int randomNumber(int from, int to) {

    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void getArrayElements(int arr[100], int arrLength) {

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


void sumTwoArrayElements(int arrSum[100], int arr1[100], int arr2[100], int arrLength) {
   
    for (int i = 0; i < arrLength; i++) {

        arrSum[i] = arr1[i] + arr2[i];
    }
    
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100];
    int arrLength = readPositiveNumber("Enter how many elments do you want?");

    getArrayElements(arr1, arrLength);
    getArrayElements(arr2, arrLength);

    cout << "\nArray 1 Elements:" << endl;
    printArrayElements(arr1, arrLength);

    cout << "\nArray 2 Elements:" << endl;
    printArrayElements(arr2, arrLength);

    int sum[100];

    sumTwoArrayElements(sum, arr1, arr2, arrLength);

    cout << "\nSum of array1 and array2 elements:" << endl;
    printArrayElements(sum, arrLength);

    return 0;
}