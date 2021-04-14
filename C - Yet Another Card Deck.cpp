#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>

using namespace std ;

int main()
{
    int n , q ;
    cin >>n >> q ;

    list<int> a ;
    list<int>::iterator it  ;
    list<int>::iterator it2  ;

    int num ;
    int i ;

    for(i = 0 ; i < n ; i++)
    {
        cin >> num ;
        a.push_back(num);
    }

    int query ;
    while(q--)
    {
        cin >>query ;

/// FINDING INDEX
        it = find(a.begin() , a.end() , query);
        int index = distance(a.begin() , it);
        index++ ;
        cout << index << " " ;
      ///  printf("It = %d Qeury = %d Position = %d\n" , *it , query , index);
        a.erase(it);
        a.push_front(query);
///debugging
/*
        for(it2 = a.begin() ; it2 != a.end() ; it2++)
        {
            printf("%d " , *it2) ;
        }
         cout << endl;
*/
    }

return 0 ;
}
