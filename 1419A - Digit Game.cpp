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

    int  T , i;
    cin >> T ;
    string a ;
    int n ;
    while(T--)
    {
        int even = 0 , odd = 0;
        cin >> n ;
        cin >> a ;

        /// for raze ;
       int  j = n - 1;

        while(j >= 0 )
        {
            if((a[j] - '0' )% 2 == 0)
            {
                even++ ;
            }
            else
            {
                odd++ ;
            }
            j = j -2 ;
        }
        ///raze last turn
        if(n % 2 != 0)
        {
            if(odd == 0 )
            {
                cout << "\t" <<2 <<endl;
                continue;
            }
            else
            {
                cout <<"\t" << 1 << endl;
                continue;
            }

        }
        else
        {
            if(even == 0)
            {
                cout << "\t" << 1 << endl;
                continue;
            }

            else
            {
                cout <<"\t" << 2 <<endl;
                continue;
            }

        }

    }




return 0 ;
}

