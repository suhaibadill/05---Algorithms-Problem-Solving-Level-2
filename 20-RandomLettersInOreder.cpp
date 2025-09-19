#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CabitalLetter = 2, SpecialCaracter = 3, Digit = 4 };

int readRandomNumber(int from, int to) {

    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

char  getRandomCharacter(enCharType CharType) {

    switch (CharType) {
    case  enCharType::SmallLetter:
        return char(readRandomNumber(97, 122));
    case enCharType::CabitalLetter:
        return char(readRandomNumber(65, 90));
    case enCharType::SpecialCaracter:
        return char(readRandomNumber(33, 47));
    case enCharType::Digit:
        return char(readRandomNumber(48, 57));
    }
}
int main()
{
    srand((unsigned)time(NULL));

    cout << getRandomCharacter(enCharType::SmallLetter) << endl;
    cout << getRandomCharacter(enCharType::CabitalLetter) << endl;
    cout << getRandomCharacter(enCharType::SpecialCaracter) << endl;
    cout << getRandomCharacter(enCharType::Digit) << endl;

    return 0;
}