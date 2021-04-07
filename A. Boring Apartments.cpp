#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ;
int main()
{
    string a ;
    int store[5] = { 0, 1, 3, 6, 10};
    int T ;
    cin >> T ;
    while(T--)
    {

        int sum = 0, counter = 0 ;

        cin >> a ;

        if(a == "1")
        {
            cout <<  1 <<endl;
        }

        else
        {
            sum = sum + (a[0] - '0' - 1) * 10  ;

            sum = sum + store[a.size()] ;
            cout << sum <<endl;
        }

    }

    return 0 ;


}
