#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    long long int  n ;

    cin >> T ;

    while(T--)
    {
        cin >> n ;

        if( n % 4 == 0)
            cout << "YES" <<endl;
        
        else cout << "NO" <<endl;

    }
    return 0 ;
}
