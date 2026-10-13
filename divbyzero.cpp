#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter two numbers: ";

    try
    {
        if (!(cin >> n >> m))
            throw "Invalid input";

        if (m == 0)
            throw "Division by zero";

        cout << "Result = " << n / m << endl;
    }
    catch (const char *e)
    {
        cout << "Exception: " << e << endl;
    }

    return 0;
}