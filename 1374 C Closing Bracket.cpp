#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    int i,n;
    string a ;

    while(T--)
    {
        int left = 0, right = 0, step = 0 ;
        cin >> n ;
        cin >> a ;

        for(i = 0 ; i < a.size() ; i++ )
        {
            if(a[i] == '(')
            {
                left++ ;
            }

            if(a[i] == ')' && left > 0)
            {
                left -- ;
            }

          //  printf("a[i] = %c  left = %d  right = %d step = %d\n",a[i], left, right, step);
        }

        cout << left <<endl;

    }
return 0 ;
}
