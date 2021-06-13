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

    ll n , a , x , b , y ;

    cin >> n >> a >> x >> b >> y ;

    int i ;

    for(i = 0 ; i < n ; i++)
    {
        if(a == n) a = 0 ;

        if(b == 1) b = n+1 ;

        a++ ;
        b-- ;

        if(a==b)
        {
            cout << "YES" <<endl;
            return 0 ;
        }

        if(a == x || b == y )
        {
            break ;
        }


    }
    cout << "NO" <<endl;


return 0 ;
}


