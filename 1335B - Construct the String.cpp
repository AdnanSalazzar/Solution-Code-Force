#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char a[26] ;
    char z  ;
    int i , j  ;
    int e , n , b ;
    for (z = 'a', i = 0; z <= 'z'; z++ ,i++)
    {
       a[i] = z ;
    }

    int T ;
    cin >> T ;

    while(T--)
    {
        cin >> n>> e >> b ;

        for(j = 0 ,i = 0 ; i < n ; i++ , j++)
        {
            if(j == b) j = 0 ;

            cout << a[j] ;

        }

        cout << endl;

    }

    return 0 ;

}
