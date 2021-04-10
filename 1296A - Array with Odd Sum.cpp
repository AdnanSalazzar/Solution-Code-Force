#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;

    int i , n  ;


    cin >> T ;



    while(T--)
    {
        int even = 0 ;
        int odd = 0 ;
        cin >> n ;
        int a[n];

        for(i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            if(a[i] & 1)
                odd++ ;
            else
                even++ ;
        }

        int sum = accumulate( a , a + n , 0 );

        if(sum % 2 == 0 )
        {
            if( even == n)
                cout << "NO" <<endl;
            else if(odd == n)
                cout << "NO" <<endl;
            else
                cout << "YES" <<endl;
        }

        else
        {
            cout << "YES" <<endl;
        }

    }
    return 0 ;
}

/*
7
1052 445 683 995 722 1012 1263
*/
