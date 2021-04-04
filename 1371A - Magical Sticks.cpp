#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;

    cin >> T ;
    int num ;

    while(T--)
    {
        cin >> num ;

        if( num & 1 )
        {
            num = num + 1 ;

            cout  <<num / 2 <<endl; ;
        }

        else
            cout << num  /2 <<endl; ;

    }


 return 0;
}
