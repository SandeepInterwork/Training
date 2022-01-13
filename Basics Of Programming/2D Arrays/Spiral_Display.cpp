#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void printSpiral(int (&mat)[mr][mc], int n, int m)
{
    int sr = 0, er = n - 1;
    int sc = 0, ec = m - 1;

    while (sr <= er && sc <= ec)
    {

        for (int row = sr; row <= er; row++)
        {
            cout << mat[row][sc] << endl;
        }
        sc++;

        for (int col = sc; col <= ec; col++)
        {
            cout << mat[er][col] << endl;
        }
        er--;

        if (!(sc > ec))
        {
            for (int row = er; row >= sr; row--)
            {
                cout << mat[row][ec] << endl;
            }
            ec--;
        }
        if (!(sr > er))
        {
            for (int col = ec; col >= sc; col--)
            {
                cout << mat[sr][col] << endl;
            }
            sr++;
        }
    }
}

int main(int argc, char **argv)
{

    int mat[mr][mc] = {0};
    int n, m;
    cin >> n >> m;

    inputBound(mat, n, m);

    // write your code here

    printSpiral(mat, n, m);
}