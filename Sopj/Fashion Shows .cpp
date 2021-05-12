#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> man(n), women(n);
		for (auto &a: man) cin >> a;
		for (auto &a: women) cin >> a;
		sort(man.begin(), man.end());
		sort(women.begin(), women.end());
		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += (man[i] *women[i]);
		}
		cout << sum << endl;
	}
}