#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];

		}

		sort(arr, arr + n);
		ll sum = 0,yes=0;
		for (ll i = 0; i < n; i++)
		{
			if (arr[i] <= i + 1) sum += (i + 1 - arr[i]);
			else yes=1;
		}
		if(yes==1) cout << "Second" << endl;
        else if(sum==0) cout << "Second" << endl;
		else if (sum % 2 == 0 ) cout << "Second" << endl;
		else cout << "First" << endl;

	}

	/*Alhamdulillah*/
}