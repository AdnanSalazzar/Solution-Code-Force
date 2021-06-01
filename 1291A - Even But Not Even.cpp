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
    int T ;
    cin >> T ;

    while(T--)
    {
        string a ;
        int n ;
        cin >> n;
        cin >> a ;

        int i, odd = 0 ;

        for(i = 0 ; i < a.size() ; i++)
        {
            if( (a[i] - '0') & 1 )
            {
                odd++ ;
            }
        }
        int num = 0 ;
        if(odd > 1 )
        {
            for(i = 0 ; i < a.size() ; i++)
            {
                if((a[i] - '0') & 1 )
                {
                    cout << a[i] ;
                    num ++ ;
                    if( num == 2)
                    {
                        break ;
                    }
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 <<endl;
        }



    }



    return 0 ;
}


