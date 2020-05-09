/*
 * Author Name: Sourab Hossain
 * Email: cpsourab@gmail.com
 */

#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1)
#define DEGREE(radian) (radian * (180 / PI))
#define RADIAN(degree) ((degree * PI) / 180)

int dr[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int dc[] = {-1, +1, +0, +0, +1, +1, -1, -1};

int main(int argc, char const *argv[])
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);

    int n;

    scanf("%d", &n);
    int data[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    sort(data, data + n); 
    int sum = 0;
    n = (n >> 1) + 1;

    for(int i = 0; i < n; i++) {
        sum += (data[i] >> 1) + 1;
    }
    
    printf("%d\n", sum);

    return 0;
}