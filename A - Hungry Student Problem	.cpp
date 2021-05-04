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
    int a  ;
    bool flag = true ;
    while(T--)
    {
        cin >> a;

        if(a % 3 == 0 || a % 7 == 0 || a % 21 == 0)
        {
            cout << "YES" <<endl;
        }
        else
        {
           while(a > 3)
           {
               a = a - 7 ;
               if(a % 3 == 0 && a > 0)
               {
                   cout << "YES" <<endl;
                   flag = false ;
                   break;
               }
           }
           // cout << a << endl;
            if(flag)
            {
              cout << "NO" <<endl;

            }
            flag = true;
        }

    }
return 0 ;
}





