#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i=0; i<t; i++)
    {
    	string s; cin >> s;
    	if (next_permutation(s.begin(), s.end()))
    		cout << s << endl;
    	else
    		cout << "no answer\n";
    }

    return 0;
}
