#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	map <int, int> box;

	int res = 0;

	while (n--)
	{
		int x; cin >> x;
		if (box.find(x) != box.end())
		{
			box[x]++;
			res = max(res, box[x]);
		}
		else
		{
			box[x] = 1;
			res = max(res, box[x]);
		}	
	}
	cout << res << "\n";
}