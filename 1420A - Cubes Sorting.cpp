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
        int n ;
        cin >> n ;
        bool flag = false;
        int a[n], i;

        for(i = 0 ; i < n ; i ++)
        {
            cin >> a[i];
        }
        for(i = 1 ; i < n ; i++)
        {
            if(a[i] >= a[i-1])
            {
                flag = true ;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }


    }



    return 0 ;
}


