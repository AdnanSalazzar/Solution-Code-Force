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

    int n ;
    cin >> n ;

    int i ;

    int a[n] ;
    int odd = 0 ;
    int even = 0 ;
    for(i = 0 ; i< n ; i++)
    {
        cin >> a[i];
        if(a[i] & 1)
        {
            odd++;
        }
        else
        {
            even++ ;
        }

    }

    cout << min(odd , even) <<endl;



return 0 ;
}


