/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
	ll t; cin >> t;
	while (t--)
	{
		ll n, k; cin >> n >> k;
		ll total = 0;
		vector<ll> res(n);
		for (int i=1; i<n; i++)
		{
			res[i-1] = pow(2, i-1);
			total += res[i-1];
		}
		res[n-1] = k - total;
		for (int i=0; i<n; i++)
			cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}