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
	vector<char> a(n);
	set<char> se;
	vector<char> res;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	for (auto x : se) {
		res.push_back(x);
	}
	cout << se.size() << endl;
	sort(res.begin(), res.end(), greater<char>());
	for (auto x : res) {
		cout << x << " ";
	}
}
