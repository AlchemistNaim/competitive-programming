/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while ( t-- )
	{
		long long a , b;
		cin >> a >> b;
		long long res = 0;
		if ( b > a )
		{
			long long tmp = a;
			a = b;
			b = tmp;
		}

		if ( a >= (2 * b) )
			cout << b << endl;
		else
		{
			cout << (a + b) / 3 << endl;
		}
	}
}