/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> sides(n);
	for (int i=0; i<n; i++) cin >> sides[i];

	sort(sides.begin(), sides.end());

	// for (int i=0; i<n; i++) cout << sides[i] << " " << endl;

	bool yes = false;
	
	for (int i=0; i<n-2; i++)
	{
		if ( sides[i] + sides[i+1] > sides[i + 2] )
		{
			yes = true;
			break;
		}
	}

	if ( yes )
		cout << "YES\n";
	else
		cout << "NO\n";

}