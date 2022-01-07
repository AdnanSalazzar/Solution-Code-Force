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

bool T1(ll a , ll b , ll c )
{
    if(b + c == a)
    {
        return true ;
    }
    else if(b == c && a % 2 == 0 )
    {
        return true ;
    }
    else
        return false ;
}

int main()
{
    AMAI ;

    ll T, x  ,a , b ,c ;
    cin >> T ;

    while(T--)
    {
        cin >>a >> b >> c ;

        if(T1(a, b , c ) || T1(b , c , a) || T1(c , a ,b))
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout <<"NO" <<endl;
        }




    }


    return 0 ;
}

