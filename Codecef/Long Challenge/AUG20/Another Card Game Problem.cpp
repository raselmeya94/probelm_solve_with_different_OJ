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
		ll s, r;
		cin >> s >> r;
		ll sc = s / 9;
		if (s % 9 > 0) sc++;

		ll sr = r / 9;
		if (r % 9 > 0) sr++;

		if (sr <= sc)
			cout << 1 << " " << sr << nl;
		else
			cout << 0 << " " << sc << nl;

	}
}