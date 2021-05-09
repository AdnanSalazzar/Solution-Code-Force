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
        ll num ;

        cin >> num ;

        if(num % 3 == 0)
        {
            cout << num / 3 << " " ;
            cout << "0 0" <<endl;
        }
        else if(num % 5 == 0)
        {
            cout << "0 " << num / 5 << " " << "0" <<endl; ;
        }

        else if( num % 7 == 0)
        {
            cout << "0 0 " << num / 7 <<endl;
        }

        else
        {
            ll three = 0 ;
            ll five = 0, seven = 0 ;
            while(1)
            {
                num = num - 3 ;
                if(num < 0)
                {
                    cout << -1 <<endl;
                    break ;
                }
                three++ ;

                if(num % 5 == 0)
                {
                    five = num / 5;
                    break ;
                }
                else if(num % 7 == 0)
                {
                    seven= num / 7 ;
                    break ;
                }



            }
            if(num >=0)
            {
                cout << three << " " << five << " " << seven <<endl;
            }

        }

    }


    return 0 ;
}


