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

    int T , i , a1 , a2 , a3 , a4 ,a5, c1, c2 , c3 ;

    cin >> T ;
    while(T--)
    {
        int extra = 0 ;
        cin >> c1 >> c2 >>  c3 ;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;


        if( (a1 + a4) <= c1 && (a2+a5) <= c2 && a3 <= c3)
        {
            cout << "YES" <<endl;
        }
        else
        {

           if(a3 < c3 )
           {
               c3 = c3 - a3 ;
           }
           else
           {
               cout << "NO" <<endl;
               continue;
           }
           if(a1 > c1 || a2 > c2)
           {
               cout << "NO" <<endl;
               continue;
           }


           if(a1 + a4 > c1)
           {
               extra = (a1 + a4) - c1 ;
           }
           if(a2 + a5 > c2)
           {
               extra = extra + ( (a2 + a5) - c2 );
           }

           if(extra <= c3)
           {
               cout << "YES" <<endl;
           }
           else
           {
               cout << "NO" <<endl;
           }


        }
    }
return 0 ;
}


