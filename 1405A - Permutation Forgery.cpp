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
    int T , n , num ;
    cin >> T ;
    int i ;
    while(T--)
    {
        cin >> n ;
        vector<int> a ;
        int num ;
        for(i = 0 ; i < n ; i++)
        {
            cin >> num ;
            a.push_back(num );
        }



        for(i = n -1 ; i >= 0  ; i--)
        {
            cout << a[i]<< " " ;
        }
        cout << endl;
    }




return 0 ;
}
