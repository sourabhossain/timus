#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;
    int k = s.size(), total = 1;

    while(n > 0) {
        total *= n;
        n -= k;
    }
    cout << total << endl;

    return 0;
}
