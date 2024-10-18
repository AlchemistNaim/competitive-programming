/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while ( t-- )
	{
		int n, k; cin >> n >> k;
		vector <int> mices(k);
		for (int i=0; i<k; i++) cin >> mices[i];
		sort(mices.rbegin(), mices.rend());
		// for (int i=0; i<k; i++) cout << mices[i] << " ";
		// cout << endl;
		int j = 0, res = 0;
		long long moves = 0;
		
		while ( j < k && moves + n - mices[j] < n )
		{
			moves += ( n - mices[j++] );
		}

		cout << j << endl;
	}
}