#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll M = 10 ll;
ll bigmod(ll N, ll P)
{
	if (P == 0) return 1;
	if (P % 2 == 0)
	{
		ll ret = bigmod(N, P / 2);
		return ((ret % M) *(ret % M)) % M;
	}
	else return ((N % M) *(bigmod(N, P - 1) % M)) % M;

}

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll x, y;
		cin >> x >> y;
		ll res = bigmod(x, y);
		cout << res << endl;

	}
}