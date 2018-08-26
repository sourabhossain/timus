#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main()
{
    int n;

    cin >> n;
    vector<pair<int, int> > data(n);

    for(int i = 0; i < n; i++) {
        cin >> data[i].first >> data[i].second;
    }

    stable_sort(data.begin(), data.end(), compare);

    for(int i = 0; i < n; i++) {
        cout << data[i].first << " " << data[i].second << "\n";
    }

    return 0;
}
