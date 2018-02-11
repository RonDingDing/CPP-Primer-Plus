#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: ";
    cout << strlen(charr) << endl;
    cout << "Length of string in str before input: ";
    cout << str.size() << endl;
    cout << "Enter a line of text to charr:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text to str:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: ";
    cout << strlen(charr) << endl;
    cout << "Length of string in str after input: ";
    cout << str.size() << endl;

    return 0;
}
