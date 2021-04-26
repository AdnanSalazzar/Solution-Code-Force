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

    int i ;
    string a ;

    cin >> a ;

    i = 0 ;
    while(a[i] != '\0')
    {
        if(a[i] == '.')
        {
            cout << 0 ;
        }

        else if(a[i] == '-' && a[i+1] == '.')
        {
            cout << 1 ;
            i++ ;
        }
        else if(a[i] == '-' && a[i+1] == '-')
        {
            cout << 2 ;
            i++ ;
        }


        i++;
    }


return 0 ;
}


