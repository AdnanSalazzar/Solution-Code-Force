#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T , i , j , N , M  ;

    cin >> T ;
    while(T--)
    {
        cin >> N >> M ;
        int a[N] , b[M] ;

        for(i = 0 ; i < N ; i++)
        {
            cin >> a[i];
        }

        for(i = 0 ; i < M ; i++)
        {
            cin >> b[i] ;
        }
        int flag = 0 ;
        for(i = 0 ; i < N ; i++)
        {
            for(j = 0 ; j <M ; j++)
            {
                if(a[i] == b[j])
                {
                    cout << "Yes"<<endl;
                    flag = 1 ;
                    cout << "1 " << a[i] <<endl;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }
        if(flag == 0)
        {
            cout << "NO" <<endl;
        }



    }
    return 0 ;
}
