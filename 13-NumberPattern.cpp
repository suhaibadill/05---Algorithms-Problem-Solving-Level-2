#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;

}

void getIvertedPatterOfNumber(int number) {

    cout << endl;

    for (int i = 1; i <= number; i++) {                //My code
        for (int j = i; j >= 1; j--) {
            cout << i;
        }
        cout << endl;
    }
}

//void getIvertedPatterOfNumber(int number) {
//
//    cout << endl;
//
//    for (int i = 1; i <= number; i++) {                
//        for (int j = 1; j <= i; j++) {
//            cout << i;
//        }
//        cout << endl;
//    }
//}
int main()
{
    getIvertedPatterOfNumber(ReadPositiveNumber("Plaese enter your number"));


    return 0;
}