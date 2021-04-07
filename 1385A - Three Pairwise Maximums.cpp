#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    int a , b , c ;
    while(T--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2] ;

        sort(a , a+ 3);

        if(a[1] == a[2])
        {

            cout << "Yes" <<endl;
            printf("%d %d %d\n" ,  a[0] , a[0] , a[2]);
        }

        else
            cout << "NO" <<endl;

    }

    return 0 ;
}

/*

x = max( a , b ) == a
y = max ( a , c) == a 
z = max ( b , c ) == b  

x == y 
and b || c < a      


*/
