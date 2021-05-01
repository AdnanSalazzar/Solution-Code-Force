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

    int T ;
    cin >> T ;
    int n , i ,counter = 0 , start = 0 ,limit = 0 ;
    bool flag = true ;
    while(T--)
    {
        counter = 0;
        cin >> n ;
        int a[n] ;

        for(i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }

        for(i = 0 ; i < n ; i++)
        {
            if(a[i] == 1)
            {
                start = i ;
                break;
            }
        }

        for(i = n-1 ; i >=0 ; i--)
        {
            if(a[i] == 1)
            {
                limit = i;
                break;
            }
        }

        for(i = start ; i <= limit ; i++)
        {
            if(a[i] == 0)
            {
                counter++;
            }
        }

        cout <<counter <<endl;
    }



return 0 ;
}


