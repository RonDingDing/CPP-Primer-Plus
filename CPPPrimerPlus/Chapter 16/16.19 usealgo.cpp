#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>

using namespace std;

char toLower(char ch) { return tolower(ch); };
string &ToLower(string &st);
void display(const string &s);

int main()
{
    vector<string> words;
    cout << "Enter words (enter q! to quit):\n";
    string input;
    while (cin >> input && input != "q!")
    {
        words.push_back(input);
    }
    cout << "You entered the following words:\n";
    for_each(words.begin(), words.end(), display);
    cout << endl;

    set<string> wordset;
    transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
    cout << endl;

    cout << "\nAlphabetic list of words:\n";
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;

    map<string, int> wordmap;
    set<string>::iterator si;
    for (si = wordset.begin(); si != wordset.end(); si++)
    {
        wordmap[*si] = count(words.begin(), words.end(), *si);
    }

    cout << "\nWord frequencey: \n";
    for (si = wordset.begin(); si != wordset.end(); si++)
    {
        cout << *si << ": " << wordmap[*si] << endl;
    }
}

string &ToLower(string &st)
{
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st;
}

void display(const string &s)
{
    cout << s << " ";
}