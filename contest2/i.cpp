/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> h(n);
	for (int i=0; i<n; i++) cin >> h[i];
	sort(h.begin(), h.end());
	int i = 0, l = 0, r = n - 1;
	vector<int> hn(n);
	while (i < )
	{
		hn[l] = h[i + 1];
		h[r] = h[i + 2];
		r = r - 1;
		l = l + 1;
	}
	for(int i=0; i<n; i++) cout << hn[i] << " ";
	cout << endl;
}