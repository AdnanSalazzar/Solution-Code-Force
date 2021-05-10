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
    int i = 0;

    while(T--)
    {
        ll n ;
        cin >> n ;

        vector<ll> a, b  ;

        ll x ;

        for(i = 0 ; i < n ; i ++)
        {
            cin >> x ;
            a.push_back(x);
        }

        ll pos = 0, neg = 0 , noPos = 0 , noNeg = 0 ;

        for(i = 0 ; i < n ; i++)
        {
            if(a[i] < 0)
            {
                neg += a[i] ;
                noNeg++;
            }
            else
            {
                pos += a[i];
                noPos++;
            }
        }

        if(pos + neg == 0)
        {
            cout << "NO" <<endl;
        }
        else
        {

            if(pos <= abs(neg))
            {
                sort(a.begin(), a.end());
            }
            else
            {
                sort(a.begin() , a.end() , greater<ll>());
            }



            cout << "YES" <<endl;
            for(i = 0 ; i < n ; i++)
            {
               cout << a[i] << " " ;
            }
            cout << endl;
        }

    }


    return 0 ;
}


