/*
ScanLine Algorithm
*/

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
    int T , i ;
    cin >> T ;

    while(T--)
    {
        int n ;
        cin >> n ;
        int a[n] = {0} ;
        int b[n +100] = {0} ,L ;

        for(i = 0 ; i < n; i++)
        {
            cin >> a[i] ;

            L = (i - a[i]) +1 ;

            if(L  > 0 )
            {
                b[L]++ ;
                b[i+1]--;
            }
            else
            {
                b[0]++;
                b[i+1]--;
            }


        }
        for(i = 1 ; i < n ; i++)
        {
            b[i] = b[i] + b[i-1] ;
        }

        for(i = 0 ; i < n ; i++)
        {
            if(b[i])
            {
                cout << 1 << " " ;
            }
            else
            {
                cout << 0 <<  " " ;
            }
        }



        cout << endl;

    }



return 0 ;
}


