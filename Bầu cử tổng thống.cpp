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
	vector<long long> a(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	int max = 0;
	int cnt = 0;
	for (auto x : mp) {
		if (x.second > max) {
			max = x.second;
			cnt = 1;
		}
		else if (x.second == max) {
			cnt++;
		}
	}
	if (cnt == 1) cout << "Trump";
	else cout << "Biden" << endl;
}
