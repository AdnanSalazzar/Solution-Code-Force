#include<bits/stdc++.h>
using namespace std ;

typedef long long ll;

int main()
{
    ll a[4] ;
    ll choice = -1  , sum = 0;
    string num ;
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> a[i];
    }

    cin >> num ;
    int i = 0 ;
    while(num[i] != '\0')
    {
        sum = sum + a[num [i] - '1'];
       // printf("a[%lld] = %lld\n" , num [i] - '0' , sum);
        i++;
    }

    cout << sum << endl;


    return 0 ;
}
