#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int i, hr, minutes, T;

    cin >> T ;

    while(T--)
    {
        int sum = 0 ;
        cin >> hr >> minutes  ;

        if(hr == 0 && minutes !=0)
        {
            hr = 46;
        }
        if(hr == 0 && minutes  == 0 )
        {
            hr == 24;
        }

        if(minutes != 0)
        {
            hr++ ;
        }

        hr = abs(24 - hr);

        sum = sum + (hr * 60);

        if(minutes != 0)
        {
            minutes = 60 - minutes ;

            sum = sum + minutes ;

        }

        cout << sum << endl;

    }
    return 0 ;
}
