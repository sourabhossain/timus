#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    int result = INT_MAX;

    result = min(result, a + b + c);
    result = min(result, a + b - c);
    result = min(result, a + b * c);
    result = min(result, a - b + c);
    result = min(result, a - b - c);
    result = min(result, a - b * c);
    result = min(result, a * b + c);
    result = min(result, a * b - c);
    result = min(result, a * b * c);

    printf("%d\n", result);

    return 0;
}
