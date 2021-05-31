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
        vector<ll> a ;

        ll x ;
        int i ;
        for(i = 0 ; i < 3 ; i++)
        {
            cin >> x ;
            a.push_back(x);
        }

        sort(a.begin() , a.end());

        if(a[0]== a[1] && a[1] == a[2] && a[0] == a[2])
        {

        }
        else if(a[0] == a[1] && a[0] == --a[2])
        {
            cout << 0 <<endl;
            continue;

        }
        else if(a[1] == a[2] && a[1] == ++a[0])
        {
            cout << 0 <<endl;
            continue;
        }

        else if(a[0] == a[1])
        {
            a[2]--;
        }
        else if(a[1] == a[2] )
        {
            a[0]++;
        }
        else
        {
            a[0]++;
            a[2]--;
        }

        ll ans = abs(a[0] - a[1]) + abs(a[0] - a[2]) + abs(a[1] - a[2]);

        cout << ans << endl ;

    }



return 0 ;
}

