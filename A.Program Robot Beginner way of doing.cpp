#include<iostream>
using namespace std ;

int main()
{
    int X , Y , drone , steps = 0 , j , i , flag = 0  , T;

    cin >> T;
    for(i = 0 ; i < T ; i++)
    {
         cin >> X >>Y ;

         drone = (X<Y)? X:Y;

         steps = drone * 2;

         if(drone == X)
         {
             steps = steps + ((Y - drone) * 2);
         }
         else
         {
             steps = steps + ((X - drone) * 2 );
         }
         if(X == Y)
         {
             cout << steps<<endl;
         }
         else
         {
            cout << steps -1 <<endl;
         }
    }
    return 0 ;
}





