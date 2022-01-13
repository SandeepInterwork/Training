#include <iostream>
using namespace std;

void printPattern(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val << "\t";
            val++;
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