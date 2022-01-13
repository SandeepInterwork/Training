#include <iostream>
#include <vector>

using namespace std;

void printDigits(int n)
{
    vector<int> digits;

    while (n > 0)
    {
        int lastDigit = n % 10;
        digits.push_back(lastDigit);

        n /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
    {
        cout << digits[i] << endl;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here

    printDigits(n);
    return 0;
}
