#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	set <string> s;
	for (int i=0; i<n; i++)
	{
		string ss; cin >> ss;
		if (s.find(ss) != s.end())
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
		s.insert(ss);
	}
}