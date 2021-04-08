#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int i , j , T ;
    cin >> T  ;
    int year ;


    while(T--)
    {
        cin >> year ;
        while(1)
        {
            if( year < 2020)
            {
                cout << "NO" <<endl;
                break;
            }


            else if(year % 2020 == 0 || year % 2021 == 0)
            {
                cout << "Yes" <<endl;
                break;
            }
            else year = year - 2021;

        }


    }

    return 0 ;
}
