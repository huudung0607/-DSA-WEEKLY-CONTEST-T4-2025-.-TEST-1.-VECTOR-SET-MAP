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

bool sodep(long long n) {
	while (n != 0)
	{
		int res = n % 10;
		if (res != 2 && res != 0 && res != 6 && res != 8)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	vector<long long> a(n);
	map<long long, long long> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (sodep(a[i]))
		{
			mp[a[i]]++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (mp[a[i]] != 0)
		{
			cout << a[i] << " " << mp[a[i]] << endl;
			mp[a[i]] = 0;
		}
	}
}
