#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , m ;

    cin >> n >> m ;

    char a[n][m] ;

    int i , j ;
    bool flag = false ;
    for(i = 0 ; i < n ; i ++)
    {
        for(j = 0 ; j < m ; j++)
        {
            cin >> a[i][j] ;
            if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y' )
                flag = true ;
        }
    }


    if(flag)
    {
        cout << "#Color" <<endl;
    }
    else
    {

        cout << "#Black&White" <<endl;
    }

    return 0  ;
}
