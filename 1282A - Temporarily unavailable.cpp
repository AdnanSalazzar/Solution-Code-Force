
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

    int T ;
    cin >> T ;
    ll a , b , c , r , dmin , dmax;
    while(T--)
    {
        cin >> a >> b >> c >> r ;

        dmin = c - r ;
        dmax = c + r ;

        if ( a > b)
        {
            swap (a , b );
        }

        if( dmax < a )
        {
            cout << b- a << endl ;
        }

        else if(dmin > b )
        {
            cout << b - a << endl;
        }
        else if( dmin <= a && dmax >= b )
        {
            cout << 0 <<endl;
        }

        else if(dmin >= a && dmax <= b)
        {
            cout << b - a - ( dmax - dmin ) <<endl;
        }

        else if(dmax >= b && dmin >= a)
        {
            cout << dmin - a  << endl ;
        }

        else if(dmax <= b && dmin <= a)
        {
            cout << b - dmax <<endl;
        }

    }


return 0 ;
}
/*
1
1 10 5 3 */
