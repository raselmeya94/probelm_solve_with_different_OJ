#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e3 + 1;

bitset< N + 1 > bs;
vector<ll> prime;
void sieveOfEratosthenes()
{
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i = 2; i < N; ++i)
	{
		if (bs[i])
		{
			prime.push_back(i);
			for (ll j = i * i; j < N; j += i) bs[j] = 0;
		}
	}
	return;
}
map<int, int> factors;
void prime_factor(int n)
{

	for (auto p: prime)
	{
		if (p * p > n) break;
		if (n % p == 0)
		{
			ll cnt = 0;
			while (n % p == 0)
			{
				n /= p;
				cnt++;
			}
			factors[p] = cnt;
		}
	}
	if (n > 1) factors[n]++;

}
void Euler_Totient_function(int n)
{
	prime_factor(n);
	ll cnt = 1;
	for (auto pp: factors)
	{

		cnt *= ((pow(pp.first, pp.second) *(pp.first - 1)) / pp.first);
	}
	cout << cnt << '\n';
	factors.clear();
}

int main()
{
	sieveOfEratosthenes();
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		Euler_Totient_function(n);
	}
}