#include<bits/stdc++.h>
using namespace std ;

int  a[20][20] ;

int main()
{
    int i , j  ;
    int n  ;

    cin >> n ;

    for(i = 0 ; i  < n ; i ++)
    {
        for(j = 0 ; j  < n ; j++)
        {
            if(i == 0 || j == 0 )
            {
                a[i][j] = 1;
               // printf("%d " , a[i][j]);
            }

            else
            {
                a[i][j] = a[i - 1][j] + a[i][j-1];
                 //printf("%d " , a[i][j]);
            }

        }
        cout << endl;
    }
        cout << a[n - 1][n - 1] <<endl;
    return 0 ;
}
