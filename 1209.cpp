#include <bits/stdc++.h>

int main()
{
    long long T, k, n;

    scanf("%lld", &T);

    while(T--) {
        scanf("%lld", &k);

        n = (-1 + sqrt(8.0 * k - 7)) / 2;

        if(k == (n * (n + 1) / 2) + 1) {
            putchar('1');
        }
        else {
            putchar('0');
        }

        if(T) {
            putchar(' ');
        }
    }
    putchar('\n');

    return 0;
}
