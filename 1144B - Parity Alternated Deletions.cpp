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

    ll n , odd = 0 , even = 0 ;
    cin >> n ;
    ll a[n] ;
    ll sum = 0;
    int i ;
    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        if(a[i] & 1)
        {
            odd++ ;
        }
        else even++;
    }

    sort(a , a+n);

    int limit;
    if(abs(odd - even) < 2)
    {
        cout <<  0 <<endl;
        return 0 ;
    }


    else if( odd > even)
    {
       limit =abs( odd - even) - 1 ;

        for(i = 0 ; i < n ; i++)
        {
            if(limit == 0 )
            {
                break ;
            }

            if(a[i] & 1)
            {

                sum+=a[i];
                 limit--;
                // cout << limit<<endl;;
            }

        }

    }

    else
    {
        limit = abs(odd - even) - 1 ;

        for(i = 0 ; i < n ; i++)
        {
            if(limit == 0 )
            {
                break ;
            }

            if(! (a[i] & 1))
            {

                sum+=a[i];
                 limit--;
                // cout << limit << endl;
            }

        }
    }

    cout << sum << endl;



return 0 ;
}
