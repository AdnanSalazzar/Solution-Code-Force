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
    ll T ;
    cin >> T ;

    while(T--)
    {
        int a , b , c , d ;

        cin >> a >> b >> c >> d ;

        cout << max(a + b , c+d )<<endl;

    }



return 0 ;
}


