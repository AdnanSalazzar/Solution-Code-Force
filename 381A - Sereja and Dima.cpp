#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int num ;
    cin  >> num ;
    int a[num];
    int i ;
    int sumD = 0, sumS = 0 ;

    for(i = 0 ; i < num ; i++)
    {
        cin >> a[i] ;
    }


    int flag = 1 ;
    int j = num - 1 ;
    i = 0;

    while(i <= j )
    {
        if(a[i] > a[j])
        {
            if(flag == 1)
            {
                sumS += max(a[i], a[j]);
                flag = 0 ;
               // printf("SUMS = %d\n", sumS);
            }

            else
            {
                sumD += max(a[i], a[j]);
                flag = 1 ;
               // printf("SUMD = %d\n", sumD);
            }
            i++;
        }

        else
        {
            if(flag == 1)
            {
                sumS += max(a[i], a[j]);
                flag = 0 ;
             //   printf("SUMS = %d\n", sumS);
            }

            else
            {
                sumD += max(a[i], a[j]);
                flag = 1 ;
               // printf("SUMD = %d\n", sumD);
            }
            j--;
        }
    }

    printf("%d %d\n", sumS, sumD);

    return 0 ;
}
