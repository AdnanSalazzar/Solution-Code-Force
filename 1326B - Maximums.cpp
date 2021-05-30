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

    int n  ;

    cin >> n ;

    int i ;
    int b[n];
    int a ;

    for(i = 0 ; i < n ; i++) cin >> b[i] ;

    int x  = 0 ;

    for(i = 0 ; i< n ; i++)
    {
        a = x + b[i];
        x = max (x , a );
        cout << a << " " ;


    }
        cout << endl ;


return 0 ;
}


