#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

    int T ;
    cin >>T ;

    while(T--)
    {
        double health = 0 , n , m ;

        cin >> health >> n >> m ;

        int i ;

        if(  health -( 10 * m )  <= 0)
        {
            cout << "YES" <<endl;
            continue;
        }

        for(i = 0 ; i < n ; i++)
        {
            health = floor(health / 2) + 10 ;
        }

        health = health -( 10 * m ) ;

        if(health <= 0)
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


