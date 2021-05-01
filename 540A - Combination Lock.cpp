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
    string a , b ;
    cin >> n ;
    int i ;
    cin >> a >> b ;
    int difference = 0 , rotation = 0 ;
    for(i = 0 ; i < n ; i ++)
    {
        difference = abs(a[i] - b[i]);

        if(difference > 5 )
        {
            difference = 10 - difference ;
        }
        rotation += difference;

    }

        cout << rotation <<endl;


return 0 ;
}


