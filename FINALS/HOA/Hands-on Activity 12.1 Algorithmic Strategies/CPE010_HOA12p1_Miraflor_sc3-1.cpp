#include <iostream>
#include <vector>
using namespace std;

int countPaths(vector<vector<int>>& matrix, int row, int col,
               int cost, int m, int n)
{
    if (row >= m || col >= n)
    {
        return 0;
    }

    cost = cost - matrix[row][col];

    if (row == m - 1 && col == n - 1)
    {
        if (cost == 0)
            return 1;
        else
            return 0;
    }

    int right = countPaths(matrix, row, col + 1, cost, m, n);
    int down = countPaths(matrix, row + 1, col, cost, m, n);

    return right + down;
}

int main()
{
    int m = 4;
    int n = 4;
    int cost;

    vector<vector<int>> matrix = {
        {4, 7, 1, 6},
        {6, 7, 3, 9},
        {3, 8, 1, 2},
        {7, 1, 7, 3}
    };

    cout << "Matrix:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nEnter the target cost: ";
    cin >> cost;

    int result = countPaths(matrix, 0, 0, cost, m, n);

    cout << "Number of paths: " << result << endl;

    return 0;
}
