#include <bits/stdc++.h>

using namespace std;

int dp[100000];

int main()
{
    dp[0] = 0, dp[1] = 1;

    for(int i = 0; i < 50001; i++) {
        dp[i << 1] = dp[i];
        dp[(i << 1) + 1] = dp[i] + dp[i + 1];
    }

    int n;

    while(scanf("%d", &n) && n) {
        int result = 0;

        for(int i = 0; i <= n; i++) {
            result = max(result, dp[i]);
        }

        printf("%d\n", result);
    }

    return 0;
}