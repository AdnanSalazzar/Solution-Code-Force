#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;
int f[10] = {0};
int main()
{
    AMAI;
    string p1 , p2 , p3 ;

    cin >> p1 >> p2 >> p3 ;
    bool flag = false ;
    int a[3];

    a[0] = p1.size() ;
    a[1] = p2.size() ;
    a[2] = p3.size() ;

    int i ;
    int ans ;
    for(i = 0 ; i < 3 ; i++)
    {
        f[a[i]]++ ;
    }

    if(f[4] == 2 && f[5] == 1)
    {
        for(i = 0 ; i < 3 ; i++)
        {
            if(a[i] == 5)
            {
                ans = i ;
                flag = true ;
                break;
            }
        }
    }

    if(f[4] == 1 && f[8] == 2)
    {
        for(i = 0 ; i < 3 ; i++)
        {
            if(a[i] == 4)
            {
                ans = i ;
                flag = true ;
                break;
            }
        }
    }
    if(f[8] == 1 && f[5] == 2)
    {
        for(i = 0 ; i < 3 ; i++)
        {
            if(a[i] == 8)
            {
                ans = i ;
                flag = true ;
                break;
            }
        }
    }


    if(flag)
    {
        if(ans == 0)
        {
            cout << "F" <<endl;
        }
        else if(ans == 1)
        {
            cout << "M" <<endl;
        }
        else
        {
            cout << "S" <<endl;
        }
    }
    else
    {
        cout << '?' <<endl;
    }

return 0 ;
}


