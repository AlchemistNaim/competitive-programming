// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// int dfs(int r, int c, int dx, int dy, vector<vector<int>> &grid, vector<vector<bool>> &visit)
// {
// 	if ( r < 0 || c < 0 || r == grid.size() || c == grid.size() || visit[r][c] == true || grid[r][c] == 1)
// 		return 0;
// 	if (r == dx and c == dy)
// 		return 1;
	
// 	visit[r][c] = true;
// 	int count = 0;
// 	count += dfs(r + 1, c, dx, dy, grid, visit);
// 	count += dfs(r - 1, c, dx, dy, grid, visit);
// 	count += dfs(r, c + 1, dx, dy, grid, visit);
// 	count += dfs(r, c - 1, dx, dy, grid, visit);
// 	count += dfs(r + 1, c + 1, dx, dy, grid, visit);
// 	count += dfs(r + 1, c - 1, dx, dy, grid, visit);
// 	count += dfs(r - 1, c + 1, dx, dy, grid, visit);
// 	count += dfs(r - 1, c - 1, dx, dy, grid, visit);
// 	visit[r][c] = false;

// 	return count;

// }

int bfs(int r, int c, int dx, int dy, vector<vector<int>> &grid)
{
	queue <pair<int, int>> q;
	vector<vector<bool>> visit(grid.size(), vector<bool> (grid.size(), false));
	q.push(make_pair(r, c));
	visit[r][c] = true;
	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		if ((cur.first == dx) && (cur.second == dy))
			return true;
		q.pop();
		std::vector<std::pair<int, int>> neighbours = { 
		    {1, 0}, 
		    {-1, 0}, 
		    {0, 1}, 
		    {0, -1}, 
		    {1, 1}, 
		    {-1, 1}, 
		    {1, -1}, 
		    {-1, -1} 
		};
		for (auto &it : neighbours)
		{
			int new_r = cur.first + it.first, new_c = cur.second + it.second;
			if ( min(new_c, new_r) < 0 || max(new_c, new_r) > grid.size() || visit[new_r][new_c] || grid[new_r][new_c] == 1)
			{
				continue;
			}
			q.push(make_pair(new_r, new_c));
			visit[new_r][new_c] = true;
		}
	}
	return false;
}

int main()
{
	optimize();
	int n; cin >> n;
	int ax, ay, bx, by, cx, cy; cin >> ax >> ay >> bx >> by >> cx >> cy;
	vector< vector<int> > grid(n, vector<int> (n, 0));
	for (int i=0; i<n; i++)
	{
		grid[i][ay] = 1;
		grid[ax][i] = 1;
	}

	for (int i=ax, j=ay; i<n && j<n; i++, j++)
		grid[i][j] = 1;
	for (int i=ax, j=ay; i>=0 && j>=0; i--, j--)
		grid[i][j] = 1;
	for (int i=ax, j=ay; i<n && j>=0; i++, j--)
		grid[i][j] = 1;
	for (int i=ax, j=ay; i>=0 && j<n; i--, j++)
		grid[i][j] = 1;


	vector<vector<bool>> visit(n, vector<bool> (n, false));

	int path = bfs(bx, by, cx, cy, grid);

	if (path)
		cout << "YES\n";
	else
		cout << "NO\n";
}