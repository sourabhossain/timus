#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);
    (!(x & 1) || (y & 1))? puts("yes") : puts("no");

    return 0;
}
