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

    int T , n , k , i ;

    cin >>T ;
    while(T--)
    {
        cin >> n >> k ;

        if(n & 1)
        {
            for(i = 3 ; i <= n ; i = i + 2)
            {   //printf("i = %d\n" , i);
                if(n % i == 0)
                {
                    n = n + i;
                    break;
                }
            }
            k-- ;

        }

        cout << n + ( k * 2 ) <<endl;

    }




return 0 ;
}


