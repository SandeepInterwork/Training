#include <iostream>
using namespace std;

void printPattern(int n)
{
    int stars = n / 2 + 1;
    int spaces = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= stars; j++)
        {
            cout << "*\t";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "\t";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*\t";
        }

        if (i <= n / 2)
        {
            stars--;
            spaces += 2;
        }
        else
        {
            stars++;
            spaces -= 2;
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