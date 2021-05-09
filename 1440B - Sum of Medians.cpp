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
        ll n, k ;

        cin>> n >> k ;


        int a[n*k + 1];

        int i ;

        for(i = 0 ; i < n*k ; i++)
        {
            cin >> a[i];
        }

        ll add = 0 ;
        if(n == 2)
        {
            for(i = 0 ; i < n*k ; i+=2)
            {
                add+= a[i];
            }
            cout << add << endl;
        }
        else
        {
            int interval = (n + 1) / 2 ;

           int  right = n*k;

            if(n % 2 == 0)
            {
                interval++;
            }

            while(k--)
            {
                right = right - interval;

                add+= a[right];
               // printf("numbers = %d\n" , a[right]);
            }
            cout << add << endl;
        }

    }


    return 0 ;
}


