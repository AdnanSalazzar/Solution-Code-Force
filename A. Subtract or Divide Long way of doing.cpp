#include<iostream>
using namespace std ;

int main()
{
    int T ,counter = 0 , num  ,i;
    cin >> T ;

    for(i = 0 ; i < T ; i++)
    {
        cin >> num ;

        if(num == 1)
        {
            cout << 0<<endl;
            continue;
        }
       else if(num == 3)
        {
            cout << 2<<endl;
            continue;
        }
        else if (num == 2)
        {
            cout << 1<<endl;
            continue;
        }



        else if(num % 2 != 0)
        {
            counter++ ;
            num = num -1 ;
        }

        while(num != 2)
        {
            num = num / (num/2);
            counter++;
        }
        cout << counter +1 <<endl;

        counter = 0;

    }

    return 0 ;
}
