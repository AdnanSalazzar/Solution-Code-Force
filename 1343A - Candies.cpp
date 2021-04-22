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
    long long int i ;
    long long int a[1000];

    int T ;
    cin >> T ;
    double num , ans ;
    while(T--)
    {
        cin >> num ;
        i = 2 ;
        while(1)
        {
            ans = num / (pow( 2.0 , i ) - 1) ;
            if(floor(ans) == ceil(ans))
            {
                break ;
            }
            i++ ;
        }
        cout << (int64_t) ans <<endl;

    }
return 0 ;
}
