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
		float a, b, c, v;
		cin >> a >> b >> c >> v;
		float ans = a *b *c * v;
		float tt = 100 * 1.0 / ans;
		int zz= tt*1000;
		if(zz<=9574)cout<<"YES"<<nl;
		else cout<<"NO"<<nl;
	}
}