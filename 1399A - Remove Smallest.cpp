#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>

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
        int num ;
        int  n, i  ;
        cin >> n ;
        int a[n];
        for( i = 0 ; i < n ; i++)
        {
           cin >>a[i] ;
        }
        bool flag = true ;

        sort(a , a + n );


        for(i = 1 ; i  < n ; i++)
        {
            if(!((a[i] -  a[i-1])<= 1) )
            {
              //  printf("a[i] = %d a[i-1] = %d\n"  , a[i] , a[i-1]);
                flag = false;
                break ;
            }
        }

        if(flag)
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

