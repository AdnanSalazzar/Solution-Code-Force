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
    ll T  , num , i;

    double a , b ;

    cin >> T ;

    while(T--)
    {
        cin >> num;
        a = 0 , b = 0 ;
        a = pow(2 , num);

        int limit = (num / 2) ;
        limit--;
        for(i = 1 ; i < num ; i++)
        {
            if(i <= limit)
            {
                a = a + pow(2 , i );
            }
            else
            {
                b = b+ pow(2 , i) ;
            }

        }

        cout << abs(a - b) <<endl;
    }




return 0 ;
}


