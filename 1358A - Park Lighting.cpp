#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int row , col ;

    while(T -- )
    {
        cin >> row >> col ;

        if((row & 1) && ( col & 1 ) )
        {
            cout << ((row * col)+ 1) / 2 <<endl;

        }

        else
            cout << (row  * col) / 2 <<endl;

    }

    return 0 ;

}
