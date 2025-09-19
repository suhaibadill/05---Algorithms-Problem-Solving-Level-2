#include <iostream>
#include <string>
using namespace std;

string readText() {

    string text;
    cout << "Please enter your name" << endl;
    getline(cin, text);

    return text;
}
string EncryptText(string text, int encryptionKey) {

    for (int i = 0; i <= text.length(); i++) {

        text[i] = char((int)text[i] + encryptionKey);
    }
    return text;
}

string decryptText(string text, int encryptionKey) {

    for (int i = 0; i <= text.length(); i++) {

        text[i] = char((int)text[i] - encryptionKey);
    }
    return text;
}
int main()
{
    const int encryptionKey = 2;
    string text = readText();

    string textAfterEncryption = EncryptText(text, encryptionKey);
    string textAfterDecryption = decryptText(textAfterEncryption, encryptionKey);

    cout << "\nText befor encryption: " << text << endl;
    cout << "Text after encryption: " << textAfterEncryption << endl;
    cout << "Text after decryption: " << textAfterDecryption << endl;

    return 0;
}