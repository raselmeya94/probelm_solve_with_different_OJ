#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string x;
		cin >> x;
		int yes = 0, cnt = 0;
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '1'	and yes == 0)
			{
				cnt++;
				yes = 1;
			}
			if (x[i] == '0')
			{
				yes = 0;
			}
		}
		cout << cnt << endl;
	}
}