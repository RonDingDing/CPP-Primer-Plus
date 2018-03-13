#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string one("Lottery Winner!"); //string(const char * s )
    cout << "one: " << one << endl;
    string two(20, '$'); //string(const char *  s, size_type n)
    cout << "two: " << two << endl;
    string three(one); //string(const string & str)
    cout << "three: " << three << endl;

    one += " Oops! ";
    cout << "one: " << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    string four; //string()
    four = two + three;
    cout << "four: " << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls, 20); //string(const char *  s,size_type n)
    cout << "five: " << five << "!\n";
    string six(alls + 6, alls + 10); //template<class Iter> string(Iter begin ,Iter end )
    cout << "six: " << six << ", ";
    string seven(&five[6], &five[10]); //string(const char *  s,size_type n)
    cout << "seven: " << seven << "... \n";
    string eight(four, 7, 16);
    cout << "eight: " << eight << " in motion!" << endl; //string(const string &  str, size_type pos, size_type n = npos)
    cout << string::npos << endl;
 
    return 0;
}