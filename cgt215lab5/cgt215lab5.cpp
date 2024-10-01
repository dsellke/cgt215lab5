
// Lab_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> intVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    string text;
    string translatedText;

    cout << "Welcome. Enter text to cypher: ";
    getline(cin, text);


    for (char character : text) {
        if (character >= 65 && character <= 90) { //capital letter
            int code = character - 65;
            translatedText += intVector[code];
        }
        else if (character >= 97 && character <= 122) { //lower case letter
            char upperCaseLetter = character - 32; //convert to a upper case number
            int upperCaseCode = upperCaseLetter - 65; //get an upper case code
            char translatedLetter = intVector[upperCaseCode];
            char lowerCaseLetter = intVector[upperCaseCode] + 32; //convert back to a lowercase
            translatedText += lowerCaseLetter;
        }
        else {
            translatedText += character;
        }
    }
    cout << "Encrypted message: " << translatedText << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
