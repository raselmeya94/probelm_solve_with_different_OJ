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
#define   IOS   {ios_base::sync_with_stdio(0); cin.tie(0);}

int main()
{   IOS;
   ll T;
   cin>>T;
  
   while(T--){
        string s , p;
        cin >> s >> p;
        string total="abcdefghijklmnopqrstuvwxyz";
        ll lo[26] = { 0 };

        for ( int i = 0 ; i<s.size() ; ++i ){
             ll x = s[i] - 'a';
             lo[x]++;
        }

        bool after = false , done = false ;

        for ( int i = 0 ; i<p.size() ; ++i ){
             ll x = p[i] - 'a';
             lo[x]--;
             if ( i and p[0]<p[i] and !after and !done ) { after = true;}
             if ( i and p[0]>p[i] ) { done = true; }
        }


        for ( int i = 0 ; i<26 ; ++i ){

             ll cur = lo[i];
             if ( !after and i == ( p[0] - 'a' ) ) cout << p;
             while ( cur-- ) cout << total[i];
             if ( after and  i == ( p[0] - 'a' ) ) cout << p;
        }

        cout << nl;
   }
 
}