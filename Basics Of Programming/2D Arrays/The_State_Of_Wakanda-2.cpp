#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>> &arr)
{
    // write your code here
    for (int k = 0; k < n; k++)
    {
        int r = 0;
        int c = k;
        while (r < n && c < n)
        {
            cout << arr[r][c] << endl;
            r++;
            c++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    upperDiagonal_traverse(n, arr);
}