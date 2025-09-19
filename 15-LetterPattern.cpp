#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int number = 0;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);

    return number;

}

void getIvertedPatterOfNumber(int number) {

    cout << endl;

    for (int i = 65; i <= 65 + number - 1; i++) {

        for (int j = 1; j <= i - 65 + 1; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}
int main()
{
    getIvertedPatterOfNumber(ReadPositiveNumber("Plaese enter your number"));


    return 0;
}