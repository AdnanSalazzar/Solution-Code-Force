#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
 
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
 
using namespace std ;
 
int main()
{
    AMAI;
 
    long long int T ;
    cin >> T ;
 
    long long int i, j, n  ;
 
    while(T--)
    {
        cin >> n ;
        int a[n] , b[n] ;
 
        for(i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
		for(i = 0 ; i < n ; i++)
        {
            cin >> b[i];
        }
 
        long long int mina , minb ;
 
        mina = *min_element(a , a+n);
        minb = *min_element(b , b+ n);
 
        long long int stepA, stepB ;
        long long int ans = 0 ;
        for(i = 0; i < n ; i++)
        {
            stepA  = a[i] - mina;
            stepB=  b[i] - minb ;
 
            ans = ans + max(stepA , stepB );
        }
        cout << ans <<endl;
 
    }
 
 
    return 0 ;
}
