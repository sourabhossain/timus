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

double distance(double x1, double y1, double x2, double y2) {
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt(dx*dx + dy*dy);
}

int main(int argc, char const *argv[])
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);

    int n;
    double r;

    scanf("%d%lf", &n, &r);
    double length = 0, points[n][2];

    for(int i = 0; i < n; i++) {
        scanf("%lf%lf", &points[i][0], &points[i][1]);

        if(i > 0) {
            length += distance(points[i][0], points[i][1], points[i - 1][0], points[i - 1][1]);
        }
    }

    length += distance(points[0][0], points[0][1], points[n - 1][0], points[n - 1][1]);
    length += 2 * PI * r;
    printf("%0.2lf\n", length);

    return 0;
}
