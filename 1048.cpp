#include <bits/stdc++.h>

using namespace std;

int sum[1000001];

int main()
{
    int n, x, y;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        sum[i] = x + y;
    }

    for(int i = n - 1; i > 0; i--) {
        sum[i - 1] += sum[i] / 10;
        sum[i] %= 10;
    }

    for(int i = 0; i < n; i++) {
        printf("%d", sum[i]);
    }

    return 0;
}
