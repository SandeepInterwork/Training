#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n)
            {
                cout << "*\t";
            }
            else if (i <= n / 2 + 1 && (i == j || i + j == n + 1))
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
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