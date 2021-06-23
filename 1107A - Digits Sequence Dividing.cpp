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
    AMAI ;

    ll T , i  ;
    cin >> T ;
    ll n ;
    string a ;
    while(T--)
    {
        cin >> n ;
        cin >> a ;

        if(a.size() == 2 && (a[0] - '0') >= (a[1] - '0') )
        {
            cout << "NO";
        }

        else
        {
            cout << "YES"<<endl;
            cout << 2 <<endl;
            for(i = 0 ; i < n ; i++)
            {
                if(i == 0)
                {
                    cout << a[i] << " " ;
                }
                else
                {
                    cout << a[i] ;
                }
            }
        }
        cout << endl;

    }


return 0 ;
}
