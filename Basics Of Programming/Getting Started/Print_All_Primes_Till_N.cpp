#include <iostream>
using namespace std;

void isPrime(int n)
{
    int count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << n << endl;
    }
}

int main(int argc, char **argv)
{
    int low, high;
    cin >> low >> high;

    //write your code here
    for (int i = low; i <= high; i++)
    {
        isPrime(i);
    }
    return 0;
}