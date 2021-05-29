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
        double num ;

        cin >> num ;
        ll ans = 0;
        while(1)
        {

            if(num < 10)
            {
                break;
            }
            else
            {
                ans += floor(num /10 ) * 10;
                num = ( num / 10) + ( (int64_t)num % 10) ;

            }

        }

        cout << (int64_t)(ans + num ) <<endl;

    }



return 0 ;
}


