#include <bits/stdc++.h>
using namespace std;
int MAX = 1e5;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		int f[n], p[n];
		for (int i = 0; i < n; i++)
		{
			cin >> f[i];
		}

		for (int i = 0; i < n; i++)
		{
			cin >> p[i];
		}

		multimap<int, int, greater < int>> pf;
		multimap<int, int>::iterator itr;
		for (int i = 0; i < n; i++)
		{
			pf.insert(pair<int, int> (f[i], p[i]));
		}

		set<int> ss;
		set<int>::iterator ii;
		for (itr = pf.begin(); itr != pf.end(); ++itr)
		{
			ss.insert(itr->first);

		}

		for (ii = ss.begin(); ii != ss.end(); ii++)
		{
			//	cout<<*ii<<" ";

			int sum = 0;
			auto it = pf.equal_range(*ii);

			for (auto itr = it.first; itr != it.second; ++itr)
			{
				sum += itr->second;
			}

			if (MAX > sum)
			{
				MAX = sum;
			}
		}
		cout<<MAX<<endl;
		MAX=1e5;
	}
}