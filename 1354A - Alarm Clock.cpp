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
    long long int timeleft =0 , totalT = 0;
    double a , b , c , d ;
    double timeextra = 0;
    while(T--)
    {
        cin >> a >> b >> c >> d ;
        if(a <= b )
        {
            cout << (int64_t)b << endl;
            continue ;
        }
        else
        {
            if( c <= d)
            {
                cout << -1 <<endl;
                continue ;
            }
            else
            {
                totalT = a - b ;

                timeextra = ceil(totalT / (double)(c - d) ) ;
              //  printf("Time extra = %lf\n" , timeextra);

                cout <<(int64_t)( b + (timeextra * c) ) <<endl;
            }

        }


    }


return 0 ;
}

