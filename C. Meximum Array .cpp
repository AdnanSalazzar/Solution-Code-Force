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

    ll T, n , i  ;

    cin >> T ;


    while(T--)
    {
        cin >> n ;
        ll a[n] ;

        map< ll, ll > mp ;


        for(i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            mp[ a[i] ]++  ;

        }

        ll maxMX = 0 ;

        while( mp[maxMX] > 0 )
            maxMX++ ;

        vector<ll> ans ;

        for(i = 0 ; i < n ; i++)
        {
            if(maxMX == 0)
            {
                for(ll j = i ; j < n ; j++)
                    ans.push_back(0);
                break ;
            }

            else
            {
                map<ll, ll > mp1 ;

                while(mp1.size() != maxMX && i < n )
                {
                    if( a[i] < maxMX )
                        mp1[a[i]]++  ;

                    mp[a[i]]-- ;
                    i++ ;
                }
                i-- ;

                ans.push_back(maxMX) ;
                maxMX = 0 ;
                while( mp[maxMX] > 0 )
                    maxMX++ ;
            }




        }
        cout << ans.size() << endl;
        for(i = 0 ; i < ans.size() ; i++)
        {
            cout << ans[i] << " " ;
        }

        cout << endl;


    }


    return 0 ;
}

