#include <bits/stdc++.h>
using namespace std;

void curiousCase(int n)
{
    // 	write your code here

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN, secMax = INT_MIN, min = INT_MAX, secMin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secMax = max;
            max = arr[i];
        }
        else if (arr[i] > secMax)
        {
            secMax = arr[i];
        }

        if (arr[i] < min)
        {
            secMin = min;
            min = arr[i];
        }
        else if (arr[i] < secMin)
        {
            secMin = arr[i];
        }
    }

    cout << secMax << " " << secMin;
}

int main()
{
    int n;
    cin >> n;
    curiousCase(n);
    return 0;
}