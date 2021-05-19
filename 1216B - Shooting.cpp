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
    ll n ;
    cin >> n ;
    int i ;
    vector<ll>  a , b , c ;
    vector<ll>::iterator it , index;
    ll dem;
    for(i =0 ; i < n ; i++)
    {
        cin >> dem ;
        a.push_back(dem);
        b.push_back(dem);
    }
    sort(b.begin() , b.end() , greater<ll>());

    ll x = 0 ;
    ll sum = 0 ;

    for(it = b.begin() ; it != b.end() ; it++)
    {
        sum += (*it * x ) + 1 ;
        x++ ;



        //printf("itof b  = %d\n" , *it);
        index = find(a.begin() , a.end() , *it);
        a[index - a.begin()] = -1 ;
        c.push_back(index - a.begin());



     //   printf("index = %d\n" ,index - a.begin() );

    }

    cout << sum << endl;

    for(it = c.begin(); it!=c.end() ; it++)
    {
        cout << *it + 1 << " " ;
    }




return 0 ;
}

