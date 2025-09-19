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

void copyArrayElements(int arrSource[100], int arrDestination[100], int arrLength) {
    

    for (int i = 0; i < arrLength; i++) {

        arrDestination[i] = arrSource[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arrLength;

    getArrayElements(arr1, arrLength);

    int arr2[100];

    copyArrayElements(arr1,arr2, arrLength) ;

    cout << "\nArray 1 elements:\n";
    printArrayElements(arr1, arrLength);

    cout << "\nArray 2 elements after copy:\n";
    printArrayElements(arr2, arrLength);


    return 0;
}