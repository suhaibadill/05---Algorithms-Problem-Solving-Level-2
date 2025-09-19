#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCaracter = 3, Digit = 4 };

int readRandomNumber(int from, int to) {

    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

char  getRandomCharacter(enCharType CharType) {

    switch (CharType) {
    case  enCharType::SmallLetter:
        return char(readRandomNumber(97, 122));
    case enCharType::CapitalLetter:
        return char(readRandomNumber(65, 90));
    case enCharType::SpecialCaracter:
        return char(readRandomNumber(33, 47));
    case enCharType::Digit:
        return char(readRandomNumber(48, 57));
    }
}

string generateWord(enCharType CharType, short length) {

    string word = "";

    for (int i = 1; i <= 4; i++) {

        word += char(getRandomCharacter(CharType));
    }
        return word;
}

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
string generateOneKey() {

    string Key = ";";

    Key = generateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + generateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + generateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + generateWord(enCharType::CapitalLetter, 4);
    
        return Key;
}

void generateKeys(int number) {
    for (int i = 1; i <= number; i++) {

        cout << "Key[" << i << "]: " << generateOneKey()
            << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    generateKeys(readPositiveNumber("Please enter how many keys do you want"));

    return 0;
}