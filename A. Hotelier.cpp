#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a[10] = {0}, i, j ;

    int T ;
    cin >> T ;
    getchar();
    char choice[T] ;

    gets(choice) ;

    int posL = 0,  posR = 9 ;
    int flag = 0;
    for(i = 0 ; i < T ; i++)
    {

        if(flag == 1 && choice[i] == 'L')
        {
            j = 0 ;
            while(1)
            {
                if(a[j] == 0 )
                {
                  //  cout << "\t J = " << j <<endl;
                    a[j] = 1 ;
                    break ;
                }
                j++;
            }

        }

        else if(flag == 1 && choice[i] == 'R')
        {
            j = 9 ;
            while(1)
            {
                if(a[j] == 0 )
                {
                    a[j] = 1 ;
                    break ;
                }
                j--;
            }

        }

        else if( choice[i] == 'L')
        {
            a[posL] = 1 ;
            posL++ ;
           // cout << "Choice L " <<endl;
        }
        else if( choice[i] == 'R')
        {
            a[posR] = 1 ;
            posR-- ;
           // cout << "Choice R " <<endl;

        }

        else if(choice[i] >= '0' && choice[i] <= '9')
        {
            a[choice[i] - '0'] = 0 ;
            flag = 1 ;
        }



    }
    for(j =0 ;  j< 10 ; j++ )
    {
        cout << a[j] ;
    }
    cout << endl;

    return 0 ;
}
