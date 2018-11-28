#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    vector<int> data(n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    int minimum = INT_MAX, limit = 1 << n;

    while(limit) {
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(limit & (1 << i)) {
                sum += data[i];
            } else {
                sum -= data[i];
            }
        }

        if(sum >= 0 && minimum > sum) {
            minimum = sum;
        }

        limit--;
    }

    printf("%d\n", minimum);

    return 0;
}
