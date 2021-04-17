#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int GCD( int a , int b )
{
    return b == 0 ? a : GCD(b , a % b );
}


int main()
{
    AMAI;

    int a , b , n ;

    cin >> a >> b >> n ;
    bool flag  = true ;

    while( n >= 0)
    {
        if(flag)
        {
            n = n - GCD( n , a);
            flag = false ;

        }
        else
        {
            n = n - GCD( n , b);
            flag = true ;
        }

    }

    if(flag)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 <<endl;
    }



return 0 ;
}

