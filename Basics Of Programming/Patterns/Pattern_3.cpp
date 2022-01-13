#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "\t";
        }
        for (int k = 1; k <= i; k++)
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