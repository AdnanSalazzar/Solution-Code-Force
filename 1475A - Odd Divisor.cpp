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
    ll num;

    while(T--)
    {
        cin >> num  ;
         bool flag = false ;
        if(num == 2)
        {
            cout << "NO" <<endl;
            continue;
        }

        if(num & 1)
        {
            cout << "YES" <<endl;
        }
        else
        {
            while(num > 1)
            {

               // printf("num = %d", num) ;
                if(num % 2 == 1)
                {
                    flag = true ;
                    cout << "YES" <<endl;
                    break;
                }
                num = num / 2 ;

            }
            if(!flag)
            {
                cout << "NO" <<endl;
            }

        }

    }




    return 0 ;
}


