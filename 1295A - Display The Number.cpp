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
        ll n ;

        cin >> n ;

        if(n &  1)
        {
            cout << 7 ;
            n -=3;
            int i ;
            for(i = 0 ; i < n/2 ; i++)
            {
                cout << 1 ;
            }
            cout << endl;
        }

        else
        {
            int i ;
            for(i = 0 ; i < n/2 ; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
    }



return 0 ;
}


