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
        int n , k ;

        cin >> n >> k ;

        int i ;

        int a[n];

        for(i = 0 ; i < n ;i++)
        {
            cin >> a[i];
        }


        if(*min_element(a , a + n) + k < *max_element(a , a+ n ) - k)
        {
            cout << "-1" <<endl;

        }

        else
        {
            cout << *min_element(a , a+ n) + k <<endl;
        }


    }


return 0 ;
}


