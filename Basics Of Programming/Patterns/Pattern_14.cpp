#include <iostream>
using namespace std;

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    printTable(n);
    return 0;
}