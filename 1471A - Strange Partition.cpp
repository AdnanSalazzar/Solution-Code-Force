#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

   unsigned long long int T , n ,x;
    cin >> T ;

    while(T--)
    {
        cin >> n ;
        cin >> x ;
        int a[n] ;
        int i ;
        double   mx = 0 , mn = 0;

        for(i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            mn += a[i] ;

            mx += (a[i] + x - 1) / x;

        }

        cout <<(int64_t) ceil( mn / x )<< " " << (int64_t)mx <<endl;


    }




return 0 ;
}


