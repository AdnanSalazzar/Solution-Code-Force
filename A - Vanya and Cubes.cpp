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

    ll num;
    cin >> num ;

    ll i , counter =  0 ;
    ll block = 0 , h = 0 ;
    while(block <= num)
    {
        h++ ;
       // cout << h << endl;
        block += (h * ( h+1) ) / 2 ;
    }

    cout << h  - 1 << endl;



return 0 ;
}

