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
    double m , n ;
    cin >> n >> m ;
    int n2 = (int)pow (2 , n) ;
    cout << (int)m % n2 <<endl;

return 0 ;
}

