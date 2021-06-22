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
    AMAI ;
    ll n ;
    cin >> n ;

    ll a[n] ;

    ll i , sum = 0 ;
    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        sum+=a[i];
    }
    sort( a , a+ n );
    ll m , coupon ;
    cin >> m ;

    while(m--)
    {
        cin >> coupon ;
        cout << sum - a[n - coupon]<<endl;
    }

return 0 ;
}
