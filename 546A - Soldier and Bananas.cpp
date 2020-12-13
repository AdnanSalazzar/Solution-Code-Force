#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int k , n ,w ,  sum;
    cin >> k >> n >> w ;

    sum = k * ( (w * (w + 1 )) / 2 );

    if (sum > n)
    {
        cout << sum - n << endl ;
    }

    else
    {
        cout << 0 <<endl ;
    }

    return 0 ;
}
