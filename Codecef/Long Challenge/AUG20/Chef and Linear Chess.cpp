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
	ll T;
	cin >> T;

	while (T--)
	{
		ll n, k, x;
		cin >> n >> k;

		ll mnn = 1e18;
		ll pos = -1;

		for (ll i = 1; i <= n; ++i)
		{
			cin >> x;
			if (k % x == 0)
			{
				ll temp = k / x;
				if (temp < mnn)
				{
					pos = x;
					mnn = temp;
				}
			}
		}

		cout << pos << nl;
	}
}