#include <iostream>
using namespace std;

void printPrimeFactors(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1)
    {
        cout << n;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    printPrimeFactors(n);
    return 0;
}
