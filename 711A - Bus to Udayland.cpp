#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

    ll row ;

    cin >> row ;
    ll j, i  ;
    char a[row][6];

    for(i = 0 ; i < row ; i ++)
    {
        cin >> a[i] ;
    }
/*
    for(i = 0 ; i < row ; i ++)
    {
        cout << a[i] <<endl;
    }
*/

    bool flag = false ;
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < 5 ; j++)
        {

            if(a[i][j] == 'O' && a[i][j+1] == 'O')
            {
                cout << "YES" <<endl;
                flag = true ;
                a[i][j] = '+';
                a[i][j+1] = '+' ;
                break ;
            }
        }
        if(flag)
        {
            break;
        }

    }

    if(flag)
    {
        for(i = 0 ; i < row ; i ++)
        {
            cout << a[i] <<endl;
        }
    }
    else
    {
        cout << "NO" <<endl;
    }
    return 0 ;
}


