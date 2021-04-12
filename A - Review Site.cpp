#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int upvote , downvote ;
    int people;
    int choice;
    while(T--)
    {
        cin >> people ;
        upvote = 0 ;
        downvote = 0 ;
        while(people--)
        {
            cin >> choice ;
            if(choice == 1)
            {
                upvote++ ;
            }

            else if(choice == 2)
            {
                downvote++ ;
            }

            else if(choice == 3)
            {
                upvote++ ;
            }


        }
        cout << upvote <<endl;

    }

    return 0 ;

}
