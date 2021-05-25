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


    vector<ll>::iterator it ;
    ll x ;


    int i ;
    while(T--)
    {
        int a[3] ;
        for(i=0 ; i < 3 ; i ++)
        {
            cin >> a[i];
        }

        sort(a , a + 3 );

        if(a[2] == a[0])
        {
            cout << "YES" <<endl;
        }

        else if(a[2] - (a[0] + a[1]) > 1 )
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" <<endl;
        }



    }


return 0 ;
}


