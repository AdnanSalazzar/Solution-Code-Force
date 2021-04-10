#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int i ;
    int n;

    int num ;
    while(T--)
    {
        cin >> n ;
        int a[n];
        int b[n];
        for(i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a , a + n);



        if(a[0] == a[n-2])
            num = a[n-1];
        else
            num = a[0];

        for(i = 0 ; i < n ; i++)
        {
            if(num == b[i])
            {
                cout << i + 1 <<endl;
                break;
            }
        }


    }
 return 0 ;
}
