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


    ll n  , m ;

    cin >> m >> n ;

    // printf("m / 2= %d\n" , (m/2));
    if(n == 0)
    {
        cout << 1 <<endl;
    }
    else if(m == n)
    {
        cout << 0 <<endl;
    }

    else if((m/2) >= n)
    {
        cout << n <<endl;
    }
    else
    {
        cout << abs(m - n) <<endl;
    }

return 0 ;
}
