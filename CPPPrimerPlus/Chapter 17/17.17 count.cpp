#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int arg_count, char *args[] )
{
    using namespace std;
    if (arg_count == 1)
    {
        cerr << "Usage: " << args[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin;
    long count;
    long total = 0;
    char ch;

    for (int file = 1; file < arg_count; file++)
    {
        fin.open(args[file]);
        if (!fin.is_open())
        {
            cerr << "Could not open " << args[file] << endl;
            fin.clear();
            continue;
        }

        count = 0;
        while (fin.get(ch))
        {
            count++;
        }
        cout << count << " characters in " << args[file] << endl;
        total += count;
        fin.clear();
        fin.close();
    }
    cout << total << " characters in all files\n";

    return 0;
}