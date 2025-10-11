// https://programming.in.th/tasks/0003
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int data[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> data[i][j];
        }
    }
    int sum[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = matrix[i][j] + data[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << sum[i][j] << " ";
            if (j == n - 1)
            {
                cout << endl;
            }
        }
    }
    return 0;
}