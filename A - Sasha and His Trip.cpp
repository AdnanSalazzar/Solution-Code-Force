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
    AMAI ;

    int n , v ;

    cin >> n >> v ;

    if(n - 1 <= v)
    {
        cout << n-1 << endl;
    }
    else
    {
        int ans = v ;
        v = n - v ;

        ans += (v * ( v+ 1)) /2 ;

        cout <<ans -1  << endl;


    }


return 0 ;
}
