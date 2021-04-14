#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
using namespace std ;

int main()
{
    string ori  ;
    char a[5][3] ;
    cin >> ori ;

    int i ;

    for(i = 0 ; i < 5 ; i++)
    {
        cin >> a[i];
    }

    for(i = 0 ; i < 5 ; i ++)
    {
        if(ori[0] ==  a[i][0])
        {
            cout << "YES" <<endl;
            return 0 ; ;
        }

        if(ori[1] == a[i][1])
        {
            cout << "YES" <<endl;
            return 0 ; ;
        }

    }
    cout << "NO" <<endl;

return 0 ;
}
