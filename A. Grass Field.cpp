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

int main()
{
    AMAI ;

    ll T ;
    cin >> T ;


    while(T--)
    {
        ll a[4] = {0} , one ,counter = 0 ;

        ll i  ;

        for(i = 0 ;i < 4 ; i++)
        {
            cin >> one;

            if(one == 1) counter++ ;
        }

        if(counter == 0)
        {
            cout << 0 <<endl;
        }
        else if(counter == 4)
        {
            cout << 2<< endl;
        }
        else
            cout << 1 <<endl;
    }


return 0 ;
}

