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
        ll n ;
        cin >> n;
        ll x ;
        vector<ll> a;

        int i ;
        ll mx = 0 ;
        bool same = false ;
        for(i = 0 ; i < n ; i++)
        {
            cin >> x ;
            if(mx < x )
            {
                mx = x ;
            }
            a.push_back(x);
        }

        for(i = 1 ; i < n ; i++)
        {
            if(a[i] != a[i-1])
            {
                same = true ;
                break;
            }
        }

        if(same)
        {
            for(i = 0 ; i < n ; i++)
            {
                if(a[i+1] == mx && a[i] !=mx )
                {
                    cout << i + 2  << endl;

                    break;
                }
                else if(a[i - 1] == mx && a[i] != mx)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
        else
        {
            cout << -1 <<endl;
        }



    }



return 0 ;
}


