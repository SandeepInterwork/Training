#include <iostream>
using namespace std;

void printFibonacci(int n)
{
    int a = 0, b = 1;

    for (int i = 0; i < n; i++)
    {
        int c = a + b;
        cout << a << endl;
        a = b;
        b = c;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    printFibonacci(n);
    return 0;
}