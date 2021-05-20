#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>

#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

    ll n ;

    cin >> n ;
    ll mid = (n+1) / 2 ;

    vector<ll> a ;

    ll x ;

    int i ;

    for(i = 0 ; i < n ; i++)
    {
        cin >> x ;
        a.push_back(x);
    }

    sort(a.begin() , a.end() , greater<ll>());

    ll sumx = 0 , sumy = 0;

    for(i = 0 ; i < mid ; i++)
    {
        sumx += a[i];
    }

    for(i = mid ; i < n ; i++)
    {
        sumy += a[i];
    }
    //printf("MID = %lld\n" , mid);
    //printf("SUMX = %lld sumy = %lld\n" , sumx , sumy);

    cout << (sumx * sumx) + (sumy * sumy) <<endl;


return 0 ;
}

