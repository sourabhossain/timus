#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    if(n <= 0) {
        for(int i = 1; i >= n; i--) {
            sum += i;
        }
    }
    else {
        for(int i = 1; i <= n; i++) {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
