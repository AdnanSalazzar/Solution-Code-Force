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
    string a ;

    cin >> a ;

    int i ;
    int one = 0 , zero = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(a[i] == '0')zero++ ;
        else one++ ;
    }

    cout << n - ( min(zero , one) * 2 ) <<endl;


return 0 ;
}


