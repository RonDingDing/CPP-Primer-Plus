#include <iostream>
#include <string>
using namespace std;
string		  version1(const string &s1, const string &s2);
const string &version2(string &s1, const string &s2);
const string &version3(string &s1, const string &s2);

int main()
{
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string as entered: " << input << endl;
    cout << endl;

    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;
    cout << endl;

    result = version2(input, "###");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;
    cout << endl;

    // cout << "Resetting original string. \n";
    // input  = copy;
    // result = version3(input, "###");
    // cout << "Your string enhanced: " << result << endl;
    // cout << "Your original string: " << input << endl;
    // cout << endl;

    return 0;
}

string version1(const string &s1, const string &s2)
{
    string temp;

    temp = s2 + s1 + s2;

    return temp;
}

const string &version2(string &s1, const string &s2)
{
    s1 = s2 + s1 + s2;

    return s1;
}

// version3会报错
// const string &version3(string &s1, const &s2)
// {
//     string temp;
//
//     temp = s2 + s1 + s2;
//
//     return temp;
// }
