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

    int n ;
    cin >> n ;

    ll a[n] ;
    int i , j ;

    ll sum = 0 , ans = 0  ;

    for(i = 0 ; i< n ; i++)
    {
        cin >> a[i] ;
    }
    sort( a , a + n );
    i = 0 ;
    j =  n - 1 ;
    while(i < j)
    {
        sum+=a[i];
        sum+=a[j];

        ans += sum * sum ;
        //cout << ans <<endl;
        sum = 0 ;

        i++;
        j--;
    }

    cout << ans << endl ;


return 0 ;
}
