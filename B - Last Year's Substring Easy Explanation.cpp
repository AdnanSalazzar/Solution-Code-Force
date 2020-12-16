/*
    there are 4 condition 
    
    2020 ....
    2 ... 020 
    20 ... 20
    202 ... 0
    ... 2020
    
    so make 4 if condition if one of them is true ... GG 
    
    
*/
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int T, i, j, N  ;
    string a;
    cin >> T ;

    for(i = 1 ; i <= T ; i++)
    {
        cin >> N;
        cin >> a ;

        if(a[0] == '2' && a[1] == '0' && a[2] == '2' && a[3] == '0')
        {
            cout << "Yes"<<endl;
            continue ;
        }

        if(a[0] == '2' && a[1] == '0' && a[2] == '2' && a[N-1] == '0')
        {
            cout << "YES"<<endl;
            continue ;
        }
        if(a[0] == '2' && a[1] == '0' && a[N-1] == '0' && a[N-2] == '2' )
        {
            cout << "YES"<<endl;
            continue ;
        }

        if(a[0] == '2' && a[N-1] == '0' && a[N-2] == '2' && a[N-3] == '0')
        {
            cout << "YES"<<endl;
            continue ;
        }
        if( a[N-1] == '0' && a[N-2] == '2' && a[N-3] == '0' && a[N-4] == '2')
        {
            cout << "YES"<<endl;
            continue ;
        }
        else
        {
            cout << "NO"<<endl;
        }

    }
    return 0 ;
}
