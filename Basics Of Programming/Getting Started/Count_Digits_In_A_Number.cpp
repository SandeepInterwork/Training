#include <iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    cout << countDigit(n);
    return 0;
}