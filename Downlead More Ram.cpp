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
#define MAX 1000000

using namespace std ;

int main()
{
    AMAI ;

    ll T , n , k , x1 ,x2 , i ;

    cin >> T ;

    while(T--)
    {
        vector< pair<ll , ll > > a  ;

        cin >> n >> k ;
        ll b[n] , c[n] ;
        for(i = 0 ; i < n ; i++)
        {
            cin >> b[i];
        }

        for(i = 0 ; i< n ; i++)
        {
            cin >> c[i];
        }


        for(ll i = 0 ; i < n ; i++)
        {
            a.push_back( make_pair(b[i] , c[i]));
        }

        sort(a.begin() , a.end()) ;


        for(ll i = 0 ; i< n ; i++)
        {
            if( a[i].first <= k)
            {
                k += a[i].second;
            }
            else
                break ;
        }

        cout << k << endl;

    }


return 0 ;
}

