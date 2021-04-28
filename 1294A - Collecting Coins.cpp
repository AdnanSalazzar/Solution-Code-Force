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
    int T ;
    cin >> T ;
    int a[4] ;
    ll i ;
    while(T--)
    {
        for(i = 0 ;i < 4 ; i++)
        {
            cin >> a[i]  ;
        }

        sort(a , a+4 - 1);

        int sum = 0 ;

        sum = (a[2] - a[0]);

        sum = sum + (a[2] - a[1]);

       /// printf("sum = %d\n" , sum);
       /// printf("A[3] = %d\n" , a[3]);
        if(sum > a[3])
        {
            cout << "NO" <<endl;
          ///  cout << "aaa" <<endl;
        }
        else
        {
            if( (a[3] - sum) % 3 == 0   )
            {
                cout << "YES" <<endl;
            }
            else
                cout << "NO" <<endl;
        }


    }



return 0 ;
}


