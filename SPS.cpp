/*
          {   MLH  } =========> LHD day 2


           STONE , PAPER AND SCISSOR.
           COME ON!!! LET'S PLAY WITH COMPUTER.



*/


#include<iostream>
#include <ctime>
#include<conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string player_name;
    cout<<"Enter player name"<<endl;
    cin>>player_name;

    int rounds;
    cout<<"How many round's do you want to play ?"<<endl;
    cin>>rounds;


    int player_score=0;
    int computer_score=0;

    for (int round = 0; round < rounds; round++)
    {
        cout<<"Round number: "<< round <<endl;
        cout<<"player score :"<< player_score <<endl;
        cout<<"computer score : "<<computer_score<<endl;

        cout<<"1. Rock"<<endl;
        cout<<"2. paper"<<endl;
        cout<<"3. Scissor"<<endl;
        int player_choice , computer_choice;

        do
        {
            cout<<"Select your choice : "<<endl;
            cin>>player_choice;
        } while (player_choice!=1 && player_choice!=2 && player_choice!=3);
        
        srand(time(0));
       computer_choice = (rand() %3)+1;

       if (player_choice==1 && computer_choice==3)
       {
           cout<<"player win"<<endl;
           player_score++;
       }
       else if (player_choice==2 && computer_choice==1)
       {
           cout<<"player win"<<endl;
           player_score++;
       }
        else if (player_choice==3 && computer_choice==2)
       {
           cout<<"player win"<<endl;
           player_score++;
       }
       else if (player_choice ==computer_choice)
       {
           cout<<"Draw"<<endl;
       }
       else{
           cout<<"computer win"<<endl;
           computer_score++;
       }
    cout<<"**********************************************************************************************"<<endl;   
       cout<<"press any key to continue..."<<endl;
       getch();
       
       
    }
    
    if (computer_score == player_score)
    {
        cout<<"Game is tie !!!"<<endl;

    }
    else if (player_score > computer_score)
    {
        cout<<"*************************************************"<<endl;
        cout<<"Player won the game!!!"<<endl;
        cout<<"*************************************************"<<endl;
    }
    else{
        cout<<"*************************************************"<<endl;
        cout<<"computer won the game!!!"<<endl;
        cout<<"*************************************************"<<endl;
    }
    
    
    return 0;
}

