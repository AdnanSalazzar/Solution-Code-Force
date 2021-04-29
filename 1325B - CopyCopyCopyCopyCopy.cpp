#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>

#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

    int T , n , i , j ;
    cin >> T ;
    while(T--)
    {
        cin >> n ;
        vector<int> a ;
        vector<int> :: iterator ip  ;
        int num ;
        int counter = 0 ;
        for(i = 0 ; i < n ; i++)
        {
            cin >> num ;
            a.push_back(num);
        }

        sort(a.begin() , a.end());

        counter = std::distance( a.begin() , std::unique( a.begin() , a.begin()+n));

        cout << counter <<endl;

    }



return 0 ;
}


