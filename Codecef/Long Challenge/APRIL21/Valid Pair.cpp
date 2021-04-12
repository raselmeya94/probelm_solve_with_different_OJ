#include <bits/stdc++.h>
#define nl endl
#define sz size
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a == b or a == c or b == c) ? "YES" : "NO") << nl;
}