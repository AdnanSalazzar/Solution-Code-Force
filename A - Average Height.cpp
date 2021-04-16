#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

    int T ;
    cin >> T ;
    int n , i , j ;
    while(T--)
    {
        cin >> n ;
        int a[n];

        list<int>even;
        list<int>odd;
         list<int>::iterator it ;
        for( i= 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }

        for(i = 0 ; i < n ; i++)
        {
            if(a[i] % 2 == 0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }
        for( it = even.begin() ; it != even.end() ; it++)
        {
            cout << *it << " " ;
        }
         for( it = odd.begin() ; it != odd.end() ; it++)
        {
            cout << *it << " " ;
        }

        cout << endl;

    }




return 0 ;
}

