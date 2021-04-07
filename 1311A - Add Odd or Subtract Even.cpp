#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    int a , b ;
    while(T--)
    {
        cin >> a >> b ;
    if(a > b)
    {
        if(a == b )
        {
            cout <<  0 << endl;
        }
        else if( abs( a - b) & 1 )
        {
            cout  << 2 <<endl;
        }
        else
            cout << 1 << endl;


    }
    else
    {
        if(a == b )
        {
            cout <<" " <<  0 << endl;
        }
        else if( abs( a - b) & 1 )
        {
            cout << 1 <<endl;
        }
        else
            cout<< 2 << endl;
    }


    }
    return 0 ;
}
