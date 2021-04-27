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

    int w , y ;
    cin >> w >>  y  ;

    int num = (6 - max(w , y) +1 );
   // printf("NUm = %d\n" , num);
    if(num == 6)
    {
        cout << "1/1"<< endl;
    }
    else if(num == 5)
    {
        cout << "5/6" <<endl;
    }

    else if(num == 4)
    {

        cout <<  "2/3" <<endl;
    }

    else if(num == 3)
    {
        cout << "1/2" <<endl;
    }

    else if(num == 2)
    {
        cout << "1/3" <<endl;
    }
    else
    {
        cout<< "1/6" <<endl;
    }

return 0 ;
}


