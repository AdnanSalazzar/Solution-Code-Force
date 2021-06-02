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
    AMAI;

    int T ;
    cin >> T ;

    while(T--)
    {
        int n ;
        cin >> n ;
        bool flag = true ;
        int i , minElem ;
        int a[n];

        for(i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }

        minElem = *min_element(a , a+n);

        for(i = 0 ; i < n ; i++)
        {
            if( (a[i] - minElem) % 2 !=0 )
            {
                cout << "NO" <<endl;
                flag = false ;
                break ;
            }
        }

        if(flag)
        {
            cout << "YES" <<endl;
        }

    }



return 0 ;
}

