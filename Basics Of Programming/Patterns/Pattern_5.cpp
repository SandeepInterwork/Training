#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = 1; j <= (n / 2 - i + 1); j++)
        {
            cout << "\t";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "\t";
        }
        for (int k = 1; k <= n - 2 * i; k++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    printPattern(n);
    return 0;
}