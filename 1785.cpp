#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    if(n >= 1 && n <= 4) {
        puts("few");
    } else if(n >= 5 && n <= 9) {
        puts("several");
    } else if(n >= 10 && n <= 19) {
        puts("pack");
    } else if(n >= 20 && n <= 49) {
        puts("lots");
    } else if(n >= 50 && n <= 99) {
        puts("horde");
    } else if(n >= 100 && n <= 249) {
        puts("throng");
    } else if(n >= 250 && n <= 499) {
        puts("swarm");
    } else if(n >= 500 && n <= 999) {
        puts("zounds");
    } else {
        puts("legion");
    }

    return 0;
}
