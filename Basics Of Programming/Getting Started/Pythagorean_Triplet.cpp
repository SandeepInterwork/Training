#include <iostream>
#include <cmath>
using namespace std;

bool isPythagoreanTriplet(int a, int b, int c, int max)
{
    if (max == a)
    {
        if (a * a == b * b + c * c)
        {
            return true;
        }
        return false;
    }
    else if (max == b)
    {
        if (b * b == a * a + c * c)
        {
            return true;
        }
        return false;
    }
    else
    {
        if (c * c == a * a + b * b)
        {
            return true;
        }
        return false;
    }
}

int main(int argc, char **argv)
{
    int a, b, c;
    cin >> a >> b >> c;

    //write your code here

    int max = 0;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    isPythagoreanTriplet(a, b, c, max) ? cout << "true" : cout << "false";
    return 0;
}