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

    while(T--)
    {
        ll n , k ;
        bool possible = false ;
        cin >> n  >> k ;



        ll a , b  ,c , d ;
        int i ;
        for(i = 1 ; i <= n ; i++)
        {
            cin >> a >> b >> c >> d ;

            if(b == c)
            {
                possible = true ;
            }

        }

        if(k & 1)
        {
            cout << "NO" <<endl;
            continue ;
        }

        if(possible)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }



    }



return 0 ;
}


