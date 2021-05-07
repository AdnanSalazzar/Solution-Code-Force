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
        int n ;
        int ini;
        cin >> n ;
       if(n == 1)
       {
           cout << 9 <<endl;
       }
       else if( n == 2)
       {
           cout << 98 << endl;
       }
       else if(n == 3)
        {
            cout << 989 <<endl;
        }

        else
        {
            cout << 989;

            n= n- 3 ;
            ini = 0;
            while(n--)
            {
                if(ini == 10)
                {
                    ini = 0 ;
                }
                cout << ini ;
                ini++;
            }
             cout << endl;
        }


    }



return 0 ;
}


