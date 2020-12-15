/*
  continue loop t-- till
  the condition are met ;
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num , t ;

    cin >> num >> t ;

    while(t)
    {
        ///cout <<"T" <<t<<endl;
        if(num %10 > 0)
        {
            num = num - 1;
        }

        else
        {
            num = num / 10;
        }
        t-- ;

       /// cout << num << endl;
    }

    cout << num<<endl;

    return 0 ;
}
