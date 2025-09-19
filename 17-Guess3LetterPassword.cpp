#include <iostream>
using namespace std;

string readPaasword(string message) {

    string letters;

    cout << message << endl;

    cin >> letters;

    return letters;
}
bool GuessThePassword(string password) {

    cout << "\n";
    string word = "";
    int counter = 0;
    
    for (int i = 65; i <= 90; i++) {

        for (int j = 65; j <= 90; j++) {

            for (int k = 65; k <= 90; k++) {

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                counter++;

                cout << "Trial [" << counter << "]: " << word << endl;
                
                if (word == password) {

                    cout << "\nPassword is " << password << endl;
                    cout << "Found after " << counter << " Trial(s)" << endl;

                    return true;
                    
                }
                word = "";

            }
        }
        
    }
    return false;
}
int main()
{
    GuessThePassword(readPaasword("Please enter your password"));

    return 0;
}