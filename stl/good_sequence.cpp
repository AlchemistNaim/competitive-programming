#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	map<int, int> mp;
	vector<int> seq(n);
	for (int i=0; i<n; i++)
	{
		int x; cin >> x;
		mp[x]++;
	}
	int res = 0;
	for (auto u: mp)
	{
		if (u.second > u.first)
			res += (u.second - u.first);
		else if (u.second < u.first)
			res += u.second;
	}
	cout << res << endl;
}