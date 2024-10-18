/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool solve(int i, int j, vector<long long> &arr)
{
	long long total = 0;
	for(int i=0; i<=j; i++)
	{
		total += arr[i];
	}
	if (total == arr[i] * 2)
		return true;
	return false;
}

int main()
{
	optimize();
		int t; cin >> t;
		while (t--)
		{
			long long n; cin >> n;
			vector<long long> arr(n);
			for (int i=0; i<n; i++) cin >> arr[i];

			int res = 0;

			for(int i=0; i<n; i++)
			{
				for(int j=i; j<n; j++)
				{
					if(solve(i, j, arr))
						res += 1;
				}
			}
			cout << res << endl;
		}
}