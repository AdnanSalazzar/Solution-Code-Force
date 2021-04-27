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
    ll T , n , i , j  ;

    cin >> T ;

    while(T--)
    {
        cin >> n ;
        int a[n * 2] ;

        for(i = 0 ; i < n * 2 ; i++)
        {
            cin >> a[i] ;
        }

        for(i = 0 ; i < n * 2 ; i++)
        {
            if(a[i] != 0)
            {
                cout << a[i] << " " ;
                for( j = i +1 ; j < n * 2 ; j++)
                {
                    if(a[i] == a[j])
                    {
                        a[j] = 0 ;
                    }
                }
            }
        }


        cout << endl;

    }




return 0 ;
}


