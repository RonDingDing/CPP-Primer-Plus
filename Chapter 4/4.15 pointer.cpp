#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;
    int *p_updates;

    int jumbo = 23;
    int *pe = &jumbo;

    p_updates = &updates;
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}
