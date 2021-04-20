#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;
    int T ;
    cin >> T ;
    int a , b  ;


    while(T--)
    {
        cin >> a>> b ;

        if(a == 1)
        {
            printf("1 %d\n" , b);
            continue;
        }

        if(b % a == 0)
        {
            printf("%d %d\n" , a , b);
            continue;
        }

        if(a * 2 <= b)
        {
            printf("%d %d\n" , a , a * 2);
            continue;
        }
        else if( (++a) * 2 <= b )
        {
            printf("%d %d\n" , ++a , (++a) * 2);
            continue;
        }

        else
        {
            printf("-1 -1\n");
        }

    }




return 0 ;
}

