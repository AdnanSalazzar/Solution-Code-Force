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
    int T , i ;
    string a ;

    cin >> T ;
    int n ;

    while(T--)
    {
        cin>> n ;

        cin >> a ;

        for(i = 0  ; i < n ; i++)
        {
           cout << a[n-1] ;
        }
        cout << endl;

    }



return 0 ;
}


