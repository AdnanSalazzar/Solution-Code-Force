#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long  int T ;
    cin >> T ;
    long long int a, b, x, y  ;
    while(T--)
    {
        long long int cost1 = 0, cost2=  0 ;
        cin >> x >> y ;

        cin >> a >> b ;
        cost1 =abs( max( x, y ) - min ( x, y)) * a ;

        cost1 += (min( x, y ))  * b ;

        //cout << cost1 <<endl;

        ///putting them down one by onex

        cost2 = max(x, y) * a + min(x, y) * a;
        //cout << cost2 <<endl;

        cout << min(cost1, cost2) <<endl;

    }
    return 0     ;
}
