#include <iostream>
#include <ctime> // describes clock() function, clock_t type
int main()
{
    using namespace std;

    /*cout << "Enter the delay time, in seconds: ";
       float secs;
       cin >> secs;*/
    clock_t delay = 1 * CLOCKS_PER_SEC; // convert to clock ticks

    //cout << "starting\a\n";
    clock_t start = clock();
    int count = 0;
    while (clock() - start < delay)
    {
        count += 1;
    } // wait until time elapses

    ;     // note the semicolon
    //cout << "done \a\n";
    cout << count;
    cin.get();
    cin.get();

    return 0;
}
