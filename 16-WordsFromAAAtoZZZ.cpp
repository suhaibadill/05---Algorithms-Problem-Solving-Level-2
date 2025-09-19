#include <iostream>
using namespace std;

void printWordsFromAAAtoZZZ() {

    cout << "\n";
    string word = "";

    for (int i = 65; i <= 90; i++) {

        cout <<endl <<  char(i) << endl;
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
               
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << word << endl;

                word = "";

            }
        }
        cout << "----------------------------------------\n";
    }
}
int main()
{
    printWordsFromAAAtoZZZ();

    return 0;
}
