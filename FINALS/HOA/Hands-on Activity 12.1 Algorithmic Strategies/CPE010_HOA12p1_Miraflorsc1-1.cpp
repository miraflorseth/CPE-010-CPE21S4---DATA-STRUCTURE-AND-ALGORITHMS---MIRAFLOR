#include <iostream>
#include <algorithm>
using namespace std;

int memo[1001];

int getMinSteps(int n)
{
    if (n == 1)
        return 0;

    if (memo[n] != -1)
        return memo[n];

    int r = 1 + getMinSteps(n - 1);

    if (n % 2 == 0)
        r = min(r, 1 + getMinSteps(n / 2));

    if (n % 3 == 0)
        r = min(r, 1 + getMinSteps(n / 3));

    memo[n] = r;

    return r;
}

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1 || n > 1000)
    {
        cout << "Enter a number from 1 to 1000." << endl;
        return 0;
    }

    for (int i = 0; i <= n; i++)
        memo[i] = -1;

    cout << "Minimum steps: " << getMinSteps(n) << endl;

    return 0;
}

