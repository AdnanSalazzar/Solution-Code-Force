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

    int n, k, l, c, d, p, nl, np ;

    cin >> n >> k >> l >> c >> d>> p>> nl>> np;

    int a[3];

     a[0] = (k * l) / nl;

    a[1] =  c * d ;

     a[2] = p / np ;
    sort(a , a+ 3);

    cout << a[0] / n  <<endl;


return 0 ;
}


