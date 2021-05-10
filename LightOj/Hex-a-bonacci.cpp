#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d, e, f;
ll arr[10005];
ll fn(ll n)
{
	if (n == 0) return a;
	else if (n == 1) return b;
	else if (n == 2) return c;
	else if (n == 3) return d;
	else if (n == 4) return e;
	else if (n == 5) return f;

	else if (arr[n] != -1) return arr[n];
	else
	{
		arr[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % 10000007;
		return arr[n];
	}
}

int main()
{
	ll t, n;
	cin >> t;
	ll cc = 1;
	while (t--)
	{
		memset(arr, -1, sizeof(arr));
		cin >> a >> b >> c >> d >> e >> f >> n;
		cout << "Case " << cc << ": " << fn(n) % 10000007 << '\n';
		cc++;

	}
}