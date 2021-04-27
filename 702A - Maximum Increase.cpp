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

    int n ;
    cin >> n ;
    int a[n] ;

    int i ;
    int temp = 1, ans = 0  ;

    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;

        if(a[i] > a[i-1] && i >= 1)
        {
            temp++;
        }
        else
        {
            ans = max(temp, ans);
            temp = 1 ;
        }

    }
    ans = max(temp, ans);


    cout << ans << endl;



    return 0 ;
}


