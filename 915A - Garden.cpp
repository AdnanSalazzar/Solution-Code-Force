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

    int n , k ;
    cin >> n >> k ;
    int a[n];

    int i ;

    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }

    sort(a , a+ n );

    for(i = n -1 ; i >=0 ; i--)
    {
        if(k % a[i] == 0)
        {
            cout << k / a[i] <<endl;
            break;
        }
    }



return 0 ;
}


