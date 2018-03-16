#include <iostream>
const int ArSize = 80;
int main()
{
    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text: \n";
    cin.get(line, ArSize);
    cout << "Complete line: \n" << line << endl;
    cout << "Line through first period: \n";

    for (int i = 0; line[i] != '\0'; i += 1)
    {
        cout << line[i];    // display character
        if (line[i] == '.')
        {
            break;                 // quit if it's a period
        }

        if (line[i] != ' ')
        {
            continue;                //skip rest of loop
        }

        spaces++;
    }

    cout << "\n" << spaces << " spaces\n";
    cout << "Done.\n";

    return 0;
}
