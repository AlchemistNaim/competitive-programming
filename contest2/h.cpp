/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y)
{
	return x > y;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, q; cin >> n >> q;
		vector<int> candy(n);
		for(int i=0; i<n; i++)
			cin >> candy[i];
		sort(candy.begin(), candy.end(), cmp);
		for(int i=1; i<n; i++)
			candy[i] += candy[i - 1];
		// for (int i=0; i<n; i++)
		// 	cout << candy[i] << " ";
		// cout << endl;
		for (int i=0; i<q; i++)
		{
			int x; cin >> x;
			int mark = 0;
			for (int i=0; i<n; i++)
			{
				if (candy[i] >= x)
				{
					cout << i + 1 << endl;
					mark = 1;
					break;
				}
			}
			if (!mark)
				cout << -1 << endl;
		}
	}
}