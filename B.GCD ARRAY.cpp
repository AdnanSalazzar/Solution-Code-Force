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

    ll T , l , r , k , odd;
    cin >> T ;

    while(T--)
    {
        cin >> l >> r >> k ;

        ll n = abs(l - r) +1 ;


        if(l == r && l != 1 )
        {
            cout << "YES" <<endl;
        }
        else
        {
            if( l % 2 == 0 && r % 2 == 0)
            {
                odd = (( n + 1) / 2) -1;
            }

            else
                odd = (( n + 1) / 2) ;


            if(odd <= k)
            {
                cout << "YES" <<endl;
            }
            else
                cout <<"NO" <<endl;
        }




    }


return 0 ;
}


