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
        int n , x ;
        cin >> n >> x ;

        int a[n] , b[204] = {0} ;

        int i ;

        for(i = 0 ; i < n ; i ++)
        {
            cin >> a[i] ;
            b[a[i]]++ ;
        }

        for(i = 1 ; i <= 204 ; i++)
        {
            if(x == 0 && b[i] == 0)
            {
                cout << "\t" << i - 1 << endl ;
                break;
            }
            if(b[i] == 0 && x != 0)
            {
                x-- ;
            }

        }

    }



return 0 ;
}

