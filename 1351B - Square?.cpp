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

    int T ;
    int a , b , c , d , x1 , x2 , y1 , y2 ;

    cin >> T ;
    while(T--)
    {
        cin >> a>> b >> c >> d ;
        if(a == b || c == d)
        {
            cout << "NO" <<endl;
            continue;
        }

        else
        {
            x1 = min( a , b);
            x2 = min(c, d);

            y1 = max ( a , b );
            y2 = max(c , d );


            if(y1 == y2 && x1 + x2 == y1)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }


    }



return 0 ;
}


