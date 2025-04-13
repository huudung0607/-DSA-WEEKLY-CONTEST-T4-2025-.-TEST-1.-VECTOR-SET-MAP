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

bool isprime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int n;
	cin >> n;
	vector <pair<int, pair<int, int>>> v(n);
	for (int i = 0; i < n; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		v[i].first = x;
		v[i].second.first = y;
		v[i].second.second = z;
	}
	bool found = false;
	vector<pair<int, pair<int, int>>> a;
	for (vector<pair<int, pair<int, int>>>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
		int sum = it->first + it->second.first + it->second.second;
		if (isprime(sum)) {
			found = true;
			a.push_back({ it->first,{it->second.first,it->second.second} });
		}
	}
	if (found) {
		for (auto x : a) {
			cout << x.first << " " << x.second.first << " " << x.second.second << endl;
		}
	}
	else
	{
		cout << "28tech";
	}
	
}
