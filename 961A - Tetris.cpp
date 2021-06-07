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

int main()
{
    AMAI;

    int n ,  m  , i ;

    cin >> n >> m ;

    int column[n] = {0};
    int x ;
    for(i = 0 ; i < m ; i++)
    {
        cin >> x ;
        x--;
        column[x]++ ;
    }


    cout << *min_element(column , column + n) <<endl;
return 0 ;
}

