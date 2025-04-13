#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int>tmp;
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    set<vector<int>> se;
    for (auto x : v)
    {
        se.insert(x);
    }
    cout << se.size();
}
