#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, h, x;
	cin >> n >> h >> x;
	int yes = 0;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		if (h - a == x) yes = 1;
	}
	cout << ((yes == 1) ? "YES" : "NO") << endl;

}