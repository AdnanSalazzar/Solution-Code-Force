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
        long long unsigned int counter = 0 ;
        long long unsigned int num , k ;

        cin >> num >> k  ;

        while(1)
        {
            if(num == 0)
            {
                break;
            }

            if(num % k == 0)
            {
                num /= k ;
                counter ++ ;
            }
            else
            {
               ll rem = num % k;

                counter += rem ;

                num -= rem ;


            }


        }
        cout << counter <<endl;
    }


return 0 ;
}


