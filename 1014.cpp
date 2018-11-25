#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    if(n == 0) {
        puts("10");
    } else if(n < 10) {
        printf("%d\n", n);
    } else {
        string ans = "";

        for(int i = 9; i > 1; i--) {
            while(n % i == 0) {
                n /= i;
                ans = to_string(i) + ans;
            }
        }

        if(n > 1) {
            puts("-1");
        } else {
            printf("%s\n", ans.c_str());
        }
    }

    return 0;
}
