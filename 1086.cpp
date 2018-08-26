#include <bits/stdc++.h>

#define SIZE 180000

using namespace std;

vector <char> p(SIZE, 1);

void prime() {
    int root = sqrt(SIZE);
    for(int i = 2; i < SIZE; i++) {
        if(p[i]) {
            for(int j = i + i; j < SIZE; j += i) {
                p[j] = 0;
            }
        }
    }
}

int main()
{
    prime();
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        int i = 2;
        for(int j = 0; j != n; ++i) {
            if(p[i]) {
                j++;
            }
        }
        printf("%d\n", i - 1);
    }

    return 0;
}
