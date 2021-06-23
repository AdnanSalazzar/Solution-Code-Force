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

    ll b, k, odd = 0  ;
     cin >> b >> k ;
    ll i ;
    ll a[k] ;



    for(i = 0 ; i < k ; i++)
    {
        cin >> a[i];
    }

    for(i = 0 ; i < k - 1 ; i++)
    {
        if(a[i] * b & 1 )
        {
            odd++;
        }
      /*  else
        {

          //  printf("a = %lld , b = %lld\n" , a[i] , b);
        }*/
    }

    if(a[i] & 1 )
    {
        odd++;
    }

    if(odd & 1)
    {
        cout << "odd"<<endl;
    }
    else
    {
        cout << "even" <<endl;
    }



    return 0 ;
}
