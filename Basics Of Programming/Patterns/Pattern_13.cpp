#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        int cij = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << cij << "\t";
            cij = (cij * (i - j)) / (j + 1);
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