#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int s, int e)
{

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void rotate(int n, int k)
{

    vector<int> arr;
    while (n > 0)
    {
        int rem = n % 10;
        arr.push_back(rem);
        n /= 10;
    }

    int len = arr.size();
    k = k % len;

    if (k > 0)
    {
        reverse(arr, 0, k - 1);
        reverse(arr, k, len - 1);
    }
    else
    {
        k = -k;
        reverse(arr, 0, len - 1 - k);
        reverse(arr, len - k, len - 1);
    }

    int finalNum = 0;
    int p = len - 1;
    for (int i = 0; i < len; i++)
    {
        finalNum += arr[i] * pow(10, p);
        p--;
    }
    cout << finalNum;
}

int main()
{
    int n, k;
    cin >> n >> k;

    //write your code here

    rotate(n, k);
    return 0;
}