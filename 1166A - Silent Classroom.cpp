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

int NcR(int n, int r)
{

    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;

    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;

            // gcd of p, k
            long long m = __gcd(p, k);

            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;

            n--;
            r--;
        }

        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }

    else
        p = 1;

    // if our approach is correct p = ans and k =1
    return p ;
}

int main()
{
    AMAI;


    int n , i ;
    cin >> n;

    char temp[100];
    int a[26] = {0}  ;

    for(i = 0 ;i < n ; i++)
    {
        cin >> temp;
        a[(temp[0] - 'a')]++ ;
    }

    int ans = 0;

/*
    for(i = 0 ; i <26 ; i++)
    {
        printf("a[%d] = %d\n" , i  , a[i]);
    }

*/
    for(i = 0 ; i < 26 ;i++)
    {
        if(a[i] > 2 )
        {
            if(a[i] %2 == 0 )
            {
                ans += ( 2 *  NcR(a[i]/2 , 2)  ) ;

            }
            else if(a[i]== 3)
            {
                ans++ ;
            }
            else
            {
                ans += ( NcR( (a[i]+1)/2 , 2  ));
                ans += NcR(a[i]/2 , 2);
            }


        }


    }

    cout << ans << endl;



    return 0 ;
}


