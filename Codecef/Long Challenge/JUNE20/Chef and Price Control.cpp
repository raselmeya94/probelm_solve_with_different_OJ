#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define sz size

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> vx;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int val;
			cin >> val;
			vx.pb(val);
			sum += val;
		}

		int red = 0;
		for (int i = 0; i < vx.sz(); i++)
		{
			if (vx[i] > k) red += k;
			else red += vx[i];
		}

		cout << abs(sum - red) << endl;

	}
}