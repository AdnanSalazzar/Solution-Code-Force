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

    int T, i, j;
    cin >> T  ;

    string a ;
    int n ;



    while(T--)
    {
        cin >> n ;
        cin >> a ;
        int t =  0,M = 0;
        for(i = 0 ; i < n ; i++)
        {
            if(a[i] == 'M')
                M++;
            if(a[i] == 'T')
                t++;
        }

        if(M * 2 != t)
        {
            cout << "NO" <<endl;
            continue;
        }

        int counter = 0 ;
        bool flag = true ;
        for(i = 0 ; i < n ; i++)
        {
            if(a[i] == 'T')
                counter++ ;
            if(a[i] == 'M')
                counter--;

            if(counter < 0)
            {
                flag = false ;
                break ;
            }

        }
        counter = 0;
        if(flag)
        {
            for(i = a.size() - 1 ; i >=0 ; i--)
            {
                if(a[i] == 'T')
                    counter++ ;
                if(a[i] == 'M')
                    counter--;

                if(counter < 0)
                {
                    flag = false ;
                    break ;
                }
            }
        }


        if(flag)
        {
            cout << "YES" <<endl;
        }
        else
            cout << "NO" <<endl;

    }





    return 0 ;
}
/*
12
TTTMTTMMMTTT
*/
