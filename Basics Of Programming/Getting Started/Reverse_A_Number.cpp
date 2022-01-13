#include <iostream>
using namespace std;

void reverse(int n)
{
    while (n > 0)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    reverse(n);
    return 0;
}