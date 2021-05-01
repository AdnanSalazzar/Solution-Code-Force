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
 
    int i, j, difference, ac = 97, ans= 0;
 
    string a ;
    cin >> a ;
 
    i = 0  ;
 
    for(i = 0 ; i < a.size()  ; i++)
    {
       // cout << a[i] ;
        difference = abs(ac - a[i] ) ;
        //cout <<difference <<endl;
        if(difference > 13)
        {
            difference = 26 - difference ;
        }
        ans += difference;
 
 
        ac = a[i] ;
 
    }
 
 
    cout << ans <<endl;
 
 
    return 0 ;
}
 
 
