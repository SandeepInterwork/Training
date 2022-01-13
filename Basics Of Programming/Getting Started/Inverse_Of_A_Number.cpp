#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void inverse(int n)
{

    int finalNum = 0;
    int idx = 1;
    while (n > 0)
    {
        int dig = n % 10;
        finalNum += idx * pow(10, dig - 1);
        n /= 10;
        idx++;
    }

    cout << finalNum;
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    inverse(n);
    return 0;
}