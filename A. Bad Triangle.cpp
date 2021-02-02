#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T, i, k, N, j, u;

    cin >> T;

    for (i = 0; i < T; i++)
    {
        cin >> N;
        long long int a[N];
        for (u = 0; u < N; u++)
        {
            cin >> a[u];
        }

        //printf("j = %d k = %d N = %d\n" , j , k , N  );
        if( (a[0] + a[1] ) <= a[N-1])
        {
           printf("1 2 %d\n" , N );
        }
        else
        {
            cout << "-1" <<endl;
        }

    }
    return 0 ;

}
