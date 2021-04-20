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

    int T ;
    cin >> T ;
    int   i, n, d ;

    while(T--)
    {
        cin >> n >> d ;

        int a[n];
        bool flag = true ;
        for(i = 0 ; i < n ; i++)
        {
            cin >>a[i];
            if( a[i] > d)
            {
                flag = false ;
            }
        }
        if(flag)
        {
            cout << "YES" <<endl;
        }

        else
        {
            sort( a, a + n );

            if(a[0] + a[1] <= d)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" <<endl;
        }



    }
    return 0 ;
}

