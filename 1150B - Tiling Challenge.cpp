#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>

#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;
 ll a[100][100] ;
int main()
{
    AMAI ;

    ll n, i ,j ;
    cin >> n ;


    char a[n+3][n+3];
/*
     for(i = 0 ; i< n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            printf("%d ", a[i][j] );
        }
        cout << endl;
    }
*/
    for(i= 0 ; i < n ; i++)
    {
        cin >> a[i];
    }


    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(a[i][j] == '.' && a[i][j+1] == '.' && a[i][j-1] == '.' && a[i+1][j]=='.' && a[i-1][j] == '.')
            {
                a[i][j] = '#';
                a[i][j+1]= '#';
                a[i][j-1]= '#';
                a[i+1][j]= '#';
                a[i-1][j]= '#';
            }
        }
    }

    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(a[i][j] != '#')
            {
                cout << "NO"<<endl;
                return 0 ;
            }
        }
    }
    cout << "YES" <<endl;



return 0 ;
}
