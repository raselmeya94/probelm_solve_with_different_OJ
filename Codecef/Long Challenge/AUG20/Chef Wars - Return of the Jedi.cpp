#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <set>
#include <stack>
#include <array>
#include <string>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pp pop_back
#define sz() size()
#define nl endl
using namespace std;
int main()
{
	ll t;
	cin >> t;

	while (t--)
	{
		ll h, p;
		cin >> h >> p;
		if (h <= p) cout << 1 << nl;
		else
		{
			while (1)
			{
				h -= p;
				p = ceil(p / 2);
				if (h <= 0 || p <= 0) break;

			}

			cout << ((h <= p) ? "1" : "0") << nl;
		}
	}
}