#include <iostream>
using namespace std;

void tableHeader() {

    cout << "\n\n\t\t\t Multiplication Table from 1 to 10 \t\t\t\t\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t ";
    }
    cout << "\n_____________________________________________________________________________________\n";
}

string columsperator(int i) {

    if (i < 10) {
        return "   |";
    }
    else
        return "  |";
}

void  printMultiplicationTable() {

    tableHeader();
    for (int i = 1; i <= 10; i++) {

        cout << " " << i << columsperator(i) << "\t";

        for (int j = 1; j <= 10; j++) {

            cout << i * j << "\t ";
        }
        cout << endl;
    }
}
int main()
{
    
    printMultiplicationTable();
    return 0;
}

