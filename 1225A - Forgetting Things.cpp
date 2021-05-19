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

    ll a , b ;

    cin >> a >> b ;

    if(a == b)
    {
        cout << a << "1" << " " << b << "2" ;
    }
    else if(a + 1 == b)
    {
        cout << a << " " << b ;
    }
    else if( a==9 && b == 1)
    {
        cout << 99 << " " << 100 ;
    }
    else
    {
        cout << "-1" <<endl;
    }




return 0 ;
}


