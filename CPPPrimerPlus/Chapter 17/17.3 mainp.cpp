#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter an integer: ";
    int n;
    cin >> n;
    cout << "n\tn * n\n";
    cout << "n"
         << "\t" << n * n << " (decimal)\n";

    cout << hex;
    cout << n << "\t";
    cout << n * n << " (hexadecimal)\n";

    cout << oct << n << "\t" << n * n << " (octal)\n";

    dec(cout);
    cout << n << "\t" << n * n << " (decimal)\n";

    return 0;
}