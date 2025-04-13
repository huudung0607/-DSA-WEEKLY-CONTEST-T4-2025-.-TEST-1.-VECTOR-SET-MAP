#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vector<int> res(x);
		for (int i = 0; i < x; i++)
		{
			cin >> res[i];
		}
		v.push_back(res);
	}
	map<vector<int>, int> mp;
	for (auto x : v) {
		mp[x]++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (mp[v[i]] != 0) {
			cout << "Day" << " ";
			for (auto x : v[i]) {
				cout << x << " ";
			}
			cout << "xuat hien " << mp[v[i]] << " lan" << endl;
			mp[v[i]] = 0;
		}
	}
}
