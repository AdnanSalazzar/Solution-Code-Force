#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int  T, k, i, j , N ;

    vector<int> integer;
    cin >> T ;
    while(T--)
    {
        cin >> N ;

        int a[N] , b[N] , c[N] ;

        for(i = 1 ; i <= N ; i++)
        {
            cin >> a[i];
        }

        for(i = 1 ; i <= N ; i++)
        {
            cin >> b[i];

            c[i] = b[i] - a[i] ;
        }
/*
        for(i = 1 ; i <= N ; i++)
        {
            printf("%d " ,c[i]);

        }
*/
        int flag = 0 ;
        int counter = 0 ;
        for(i = 1 ; i <= N ; i++)
        {
            if(c[i] < 0)
            {
                flag = 1;
                break ;
            }

            //if(c[i] == 0 && c[i] == c[i - 1] && i > 1)
              //  continue;
            if(c[i] > 0)
            {
                while(c[i] == c[i+1])
                {
                    i++;
                   // cout << i <<endl;
                }
                counter++;
               // cout << endl;
               // cout << counter <<endl;
            }
            if(counter > 1)
            {
                flag = 1 ;
                break;
            }
        }

        if(flag)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" <<endl;
        }

    }


return 0 ;
}
