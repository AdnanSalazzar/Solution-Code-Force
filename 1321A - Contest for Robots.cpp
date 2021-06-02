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
    int n ;
    cin >> n ;
    int a[n] , b[n] , noa = 0 , nob = 0 ;

    int i ;

    bool flag = false ;

    int _10 = 0 , _11 = 0 ;

    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        if(a[i] == 1) noa++;
    }

    for(i = 0 ; i < n ; i++)
    {
        cin >> b[i];

        if(b[i] == 1 ) nob++;

        if(a[i] == 1 && b[i] == 0)
        {
            flag = true ;
            _10++;
        }
        if(a[i] == 1 && b[i] == 1)
        {
            _11++;
        }

    }


    if(noa > nob)
    {
        cout << *max_element(a , a+n) <<endl;
    }
    else if(!flag)
    {
        cout << -1 <<endl;
    }

    else
    {
        nob = nob - _11 ;

        cout << (nob / _10 + 1 )<<endl;
    }

return 0 ;
}


