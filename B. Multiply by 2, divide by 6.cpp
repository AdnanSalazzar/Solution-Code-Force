#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int num  , T ;

    cin >> T ;
    while(T--)
    {
        int counter = 0 ;
        cin >> num ;


        while(num > 1 )  /// == 0 if( num == 1 )
        {
            if(num % 6 == 0)
            {
                num = num / 6 ;
                counter++;
            }

            else
            {
                num = num * 2 ;
                counter++ ;
            }
        }

        if( num == 1 )
        {
            cout<<  counter <<endl;
        }

        else
        {
            cout << -1 <<endl;
        }


    }

    return 0 ;
}
