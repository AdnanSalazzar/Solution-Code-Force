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
        ll n , a , b , c , d;

        cin >> n >> a >> b >> c >> d ;

       ll  mn = ( n *(a - b) ) ;
       ll mx =  (n *(a + b) ) ;

       // printf("mn = %lld\n" , mn);
        //printf("mx = %lld\n" , mx);


        if( (  mn > c+d   ) || (mx < c-d  ) )
        {
            cout << "NO" <<endl;
        }
        else
            cout << "YES" <<endl;

    }


return 0 ;
}


