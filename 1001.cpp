#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    vector<double> data;

    while(cin >> n) {
        data.push_back(n);
    }

    for(int i =  data.size() - 1; i >= 0; i--) {
        printf("%0.4lf\n", sqrt(data[i]));
    }

    return 0;
}
