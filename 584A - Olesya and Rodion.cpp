#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int i , t , n ;


    cin >> n >> t ;

    int counter = 0 ;

    if( t == 10 && n == 1)
    {
        cout << -1 <<endl;
        return 0 ;
    }

    if( t >= 2 && t<= 9)
    {
        for(i = 0 ; i < n ; i++)
        cout << t ;

    }

    else
    {
        cout << 1 ;
        for(i = 1 ; i < n ; i++)
            cout << 0 ;
    }



    cout << endl;
    return 0 ;
}
