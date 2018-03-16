#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big
{
    double stuff[20000];
};

int main()
{
    // Big *pb;
    // try
    // {
    //     cout << "Trying to get a big block of memory:\n";
    //     pb = new Big[10000000];
    //     cout << "Got past the new request:\n";
    // }
    // catch (bad_alloc &ba)
    // {
    //     cout << "Caught the exception!\n";
    //     cout << ba.what() << endl;
    //     exit(EXIT_FAILURE);
    // }
    // cout << "Memory successfully allocated\n";
    // pb[0].stuff[0] = 4;
    // cout << pb[0].stuff[0] << endl;
    // delete[] pb;
    Big *pb;
    pb = new (std::nothrow) Big[1000000000]; // 1,600,000,000 bytes
    if (pb == 0)
    {
        cout << "Could not allocate memory. Bye.\n";
        exit(EXIT_FAILURE);
    }
    return 0;
}