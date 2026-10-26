#include <iostream>
#include <algorithm>
using namespace std;

int getMinSteps(int n)
{
    int dp[1001], i;

    dp[1] = 0;

    for (i = 2; i <= n; i++)
    {
        dp[i] = 1 + dp[i - 1];

        if (i % 2 == 0)
            dp[i] = min(dp[i], 1 + dp[i / 2]);

        if (i % 3 == 0)
            dp[i] = min(dp[i], 1 + dp[i / 3]);
    }

    return dp[n];
}

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1 || n > 1000)
    {
        cout << "Please enter a number from 1 to 1000." << endl;
        return 0;
    }

    cout << "Minimum steps: " << getMinSteps(n) << endl;

    return 0;
}
