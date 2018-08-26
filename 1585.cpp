#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d ", &T);
    string s;
    map <string, int> m;

    while(T--) {
        getline(cin, s);
        m[s]++;
    }

    int Max = 0;
    for(map <string, int>::iterator it = m.begin(); it != m.end(); it++) {
        if(Max < it->second) {
            s = it->first;
            Max = it->second;
        }
    }
    cout << s << endl;

    return 0;
}
