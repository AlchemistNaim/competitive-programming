#include <bits/stdc++.h>
using namespace std;

int main()
{
	queue<pair<int, int>> q;
	set<pair<int, int>> visit;
	q.push(make_pair(3, 2));
	vi
	pair<int, int> cur = q.front();
	q.pop();
	cout << cur.first << " " << cur.second << endl;

	vector<pair<int, int>> neighbours = { {1, 0}, (-1, 0), {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1} };

	for (auto &it : neighbours)
	{
		int new_r = cur.first + it.first, new_c = cur.second + it.second;
		if ( min(new_c, new_r) < 0 || max(new_c, new_r) > n || )
	}

}