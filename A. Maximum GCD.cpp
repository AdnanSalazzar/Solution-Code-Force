#include<bits/stdc++.h>
using namespace std ;

int main()
{

    int T , num  ;
    cin >> T ;
    while(T--)
    {
        cin >> num ;

        if(num &  1)
        {
            num--;

            cout << num / 2 <<endl;
        }
        else
            cout << num / 2 <<endl;

    }

    return 0 ;
}
