/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

bool isTriangle(ll a, ll b, ll c)
{
	if ( a + b <= c || b + c <= a || c + a <= b ) return false;
	return true;
}

int main()
{
	ll n; cin >> n;
	vector<ll> sides(n);
	for(int i=0; i<n; i++)
	{
		cin >> sides[i];
	}
	sort(sides.begin(), sides.end());
	if (isTriangle(sides[n-1], sides[n-2], sides[n-3]))
	{
		cout << "Yes\n";
	}
	else
		cout << "No\n";
}