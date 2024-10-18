#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	map<string, string> mp;
	while (n--)
	{
		string s, s1; cin >> s >> s1;
		s1 += ';';
		mp[s1] = s;
	}
	while (k--)
	{
		string s, s1; cin >> s >> s1;
		cout << s << " " << s1 << " #" << mp[s1] << "\n";
	}
}

// 2 2
// main 192.168.0.2
// replica 192.168.0.1
// block 192.168.0.1;
// proxy 192.168.0.2;