#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstString, secondString, combinedString;

    for (int i = 0; i < 3; i++) {
        cout << "Enter the first string: ";
        getline(cin, firstString);

        cout << "Enter the second string: ";
        getline(cin, secondString);

        combinedString = firstString + secondString;

        cout << "Combined String: " << combinedString << endl << endl;
    }

    return 0;
}