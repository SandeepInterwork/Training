#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
}

int lcm(int x, int y)
{
    return ((x * y) / gcd(x, y));
}

int main(int argc, char **argv)
{
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here

    cout << gcd(num1, num2) << endl
         << lcm(num1, num2);
    return 0;
}