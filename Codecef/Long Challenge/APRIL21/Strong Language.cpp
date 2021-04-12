#include <bits/stdc++.h>
#define nl endl
#define sz size
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		string x;
		cin >> x;
		map<char, int> mp;
		int ma = 0;
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '*') mp[x[i]]++;
			else
			{
				ma = max(mp['*'], ma);
				mp['*'] = 0;
			}
		}

		if (max(mp['*'], ma) >= k) cout << "YES" << nl;
		else cout << "NO" << nl;

	}
}