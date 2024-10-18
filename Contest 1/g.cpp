/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int isPrime(long long res)
{
	if (res <= 1) return 0;
	if ( res == 2 ) return 1;
	for (int i=0; i*i <= res; i++)
		if (res % i == 0) return 0;
	return 1;
}

int main()
{
	optimize();
	int t; cin >> t;
	for (int i=0; i<t; i++)
	{
		unsigned long long a, b; cin >> a >> b;
		uint64_ rtes = 0;
		res = int((a - b) * (a + b));
		if (isPrime(res))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

}