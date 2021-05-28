#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>

#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI;

    int T ;
    cin >> T ;

    while(T--)
    {
        int n ;
        cin >> n;

       vector<int> a ;
       vector<int>::iterator it1 , it2 ;

        int x ;
        int i ;
        for(i = 0 ; i < 2*n ; i++)
        {
            cin >> x;

            a.push_back(x);
        }

        sort(a.begin() , a.end());

        it1 = a.begin();
        it2 = a.end() - 1;

        while(it1 < it2)
        {
            cout << *it1 << " ";
            cout << *it2 << " ";
            it1++;
            it2--;
        }
        cout << endl;
        //it1 = a.end();
        //printf("a.begin = %d\n" , it1 - a.begin() );


    }


return 0 ;
}


