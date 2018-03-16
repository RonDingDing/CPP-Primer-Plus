#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest  = 42;
    int waist  = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!" << endl;

    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    cout << dec;
    cout << "inseam = " << inseam << " (decimal for 42)" << endl;

    return 0;
}
