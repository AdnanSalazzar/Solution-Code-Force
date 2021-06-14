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
        int a , b , c ;

        cin >> a >> b >> c ;

        cout << a - min(b , c) +1 <<endl;

    }



return 0 ;
}


