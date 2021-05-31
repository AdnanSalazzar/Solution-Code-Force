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

        cin >>n >> k ;
        ll cand = 0 ;

        cand = n - n % k ;

        cand =  cand + min(n % k, k / 2) ;

        cout << cand << endl;

    }



    return 0 ;
}


