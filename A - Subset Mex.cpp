#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
 
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
 
using namespace std ;
 
int main()
{
    AMAI;
 
    int T, i;
    cin >> T ;
 
    while(T--)
    {
        int sum = 0;
        int n ;
        cin >> n ;
        int a[105] = {0};
/*
        printf("Original Vector at the beggoining\n");
 
        for(i = 0 ; i < 10 ; i++)
        {
            cout << a[i] <<endl;
        }
*/
        for(i = 0 ; i < n ; i ++)
        {
            int num ;
            cin >> num ;
            a[num]++;
        }
 
        for(i = 0 ; i <=105 ; i++)
        {
            if(a[i] > 0 )
            {
                a[i]--;
            }
            else
            {
                sum = i;
                break;
            }
 
        }
        // printf("Sum1 = %d\n" , sum );
        for(i = 0 ; i <= 105 ; i++)
        {
            if(a[i] > 0 )
            {
                a[i]--;
            }
            else
            {
                sum =  sum + i;
                break;
            }
 
        }
        //  printf("Sum2 = %d\n" , sum );
 
        cout << sum << endl;
 
    }
 
 
    return 0 ;
}
