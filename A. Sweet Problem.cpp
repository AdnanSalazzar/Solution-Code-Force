#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T , i , ans1 , ans2 ;
    int a[3];
    cin >> T ;
    while(T--)
    {
        for(i = 0 ; i < 3 ; i++)
        {
            cin >> a[i];
        }

    sort(a , a+3);
      if(a[0] + a[1] <= a[2])
      {
        cout << a[0] + a[1] <<endl;
      }

      else
      {
          cout << (a[0] + a[1] + a[2]) / 2 <<endl;
      }

    }
    return 0 ;
}
