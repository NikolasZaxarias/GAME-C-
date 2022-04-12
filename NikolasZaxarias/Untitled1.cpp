#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

string name;
void Start();
void Game();
void GameStart();
void Intro();
void ChooseClass();
void Chapter1();
void Chapter1_FinalPart();
void Chapter2();
void Chapter3();
void The_End();


int playerLocation = 0;
int userInput = 0;

int main(int argc, char*argv)
{
 Start();
 Game();
 GameStart();
 Intro();
 ChooseClass();
 Chapter1();
 Chapter1_FinalPart();
 Chapter2();
 Chapter3();
 The_End();
 
 
   
}
void Start()
{

system("cls");
system("color c ");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************      IT IS TIME        ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";


system("pause");
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************      TO BE A HERO      ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";

system("pause");
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************      A SUPER HERO      ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
system("pause");
system("cls");
Game();
}
void Game()
{
    system("cls");
system("color c");
cout <<"\n";
cout <<"\n";
cout <<"\n";
cout <<"\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t *********************    BECOME     ********************\n";
cout <<"\t \t \t \t *********************      AN       ********************\n";
cout <<"\t \t \t \t *********************    AVENGER    ********************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t *AVENGERS***********{1} New Game    ***********AVENGERS*\n";
cout <<"\t \t \t \t ********************{2}   EXIT      ********************\n";
cout <<"\t \t \t \t ********************************************************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";



cout <<"\n";
cout <<"\n";
cout <<"\t \t \t \t please select: \n";
cout <<"\t \t \t \t {1} or {2}\n";
cout <<"\t                                                          CREATED_BY:Nickolas_Zax \n";

cout << "\n\n\t";

while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
    if (userInput == 1)
{
system("cls");
    GameStart();
}
    else
{

    system("cls");
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";
    cout << "\t                                               BYE BYE! \n";
    exit(0);
   
   
}
   

}
void GameStart()
{
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t \t \t \t \t \t--------------¦¦¦¦¦¦-------\n";
cout << "\t \t \t \t \t \t------__¦¦¦¦¦¦¦¦¦¦¦¦_------ \n";
cout << "\t \t \t \t \t \t----_¦¦¯¯----¦¦¦¦¦¦¦¦¦_---- \n";
cout << "\t \t \t \t \t \t--_¦¦¯-------¦¦¦¦¦¦¦-¯¦¦_-- \n";
cout << "\t \t \t \t \t \t-¦¦¦--------¦¦¦¦-¦¦¦---¦¦¦- \n";
cout << "\t \t \t \t \t \t-¦¦¦--------¦¦¦¦-¦¦¦---¦¦¦- \n";
cout << "\t \t \t \t \t \t¦¦¦--------¦¦¦¦--¦¦¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦--------¦¦¦¦--¦¦¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦-------¦¦¦¦---¦¦¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦------¦¦¦¦¦¦¦¦¦_-----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦------¦¦¦¦¦¦¦¦¦¯-----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦-----¦¦¦¦----¯-_¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t-¦¦¦----¦¦¦-----_¦¦¦---¦¦¦- \n";
cout << "\t \t \t \t \t \t-¦¦¦_--¦¦¦¦-----------_¦¦¦- \n";
cout << "\t \t \t \t \t \t--¯¦¦¦-¦¦¦---------__¦¦¦¯-- \n";
cout << "\t \t \t \t \t \t------¦¦¦¦-¯¦¦¦¦¦¦¦¦¦¯¯---- \n";
cout << "\t \t \t \t \t \t------¦¦¦------------------ \n";
cout<<"\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
        if (i<10)
        Beep(0,200);
        if (i>=10 && i<20)
       Beep(0,100);
        if (i>=10)
      Beep(0,70);

    }
system("cls");
Intro();
}
void Intro()
{
    system("cls");
system("color 3");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                        THOR:Greetings my child! \n";


system("pause");
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                    THOR:Im Thor the strongest Avenger! \n";


system("pause");
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                   THOR:Every Avenger has a Hero name! \n";


system("pause");
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                      THOR:What should i call you? \n";



cout << "\t                                      Type your name :";cin >> name;


system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";        
cout << "\t                         THOR:Greetings " << name << " hmmm... your name sounds like Asgrardian \n";


    system("pause");
    system("cls");
   
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                     THOR:Are you from Asgard?                                    \n";
   
   
    cout << "\t                                     {1}Yes \n";
    cout << "\t                                     {2}No  \n";

cout << "\n\n\t";

while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
    if (userInput == 1 )
{
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                    THOR:Why are you lying to me child\n";
   
   
}
    else
{

    system("cls");
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                  THOR:I thought you were from Asgard! \n";
 
}
    system("pause");
    system("cls");
      cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                    THOR:Anyway...                       \n";
 

    system("pause");
    system("cls");
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                    THOR:Are you ready to be an Avenger?  \n";  
cout << "\t                                    {1}Im ready!!! \n";
    cout << "\t                                    {2}Do i have other choice; \n";
   

cout << "\n\n\t";

while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
    if (userInput == 1 )
{
                                     
    system("cls");
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                    THOR:Great!                       \n";
   
}

else
{
system("cls");
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                 THOR:Haha...Well you can continue your boring life or become an avenger!                      \n";
   
}
   
    system("pause");
    system("cls");
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                             THOR:So...                      \n";
    Beep(0,2000);
   
    system("cls");
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";      
    cout << "\t                                         THOR:Lets start!                     \n";
    Beep(0,2000);
    ChooseClass();
}
void ChooseClass()
{
int classChoise = 0;
system ("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                          (Choose your class:)            \n";
cout << "\t                                [1] Super strength (STORY_ONE ULTRON)     \n";
cout << "\t                                [2]    Speeder      (STORY_TWO LOKI)      \n";
cout << "\t                                [3]   Invisible   (STORY_THREE THANOS)    \n";

cout << "\n>\t";
while (!(cin >> classChoise) || classChoise < 1 || classChoise > 3)
{
    cout <<"ERROR.You cannot choose more than '1' or '3' \n";
cin.clear();
cin.ignore(100, '\n');
}
switch (classChoise)
 {
case 1:
    system("cls");
    cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                         You choose Super strength! \n";
cout << "\t           The power to possess a level of strength drastically beyond what is naturally possible. \n";
cout << "\t           Your weakness is: Green kryptonite \n";
system("pause");
    Chapter1();
   

case 2:
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                         You choose to be Speeder! \n";
    cout << "\t                   The power to move at speeds drastically beyond what is naturally possible.      \n";
    system("pause");
Chapter2();
   
   
case 3:
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t                                           You choose invisible!   \n";
cout << "\t           The power to render oneself unable to be seen. Not to be confused with Camouflage. \n";
system("pause");
    Chapter3();
   
default:
cout << "\t   You are doing wrong!Press either '1' or '2' or '3' nothing else \n";
}


Chapter1();
}
void Chapter1() // Super strength (STORY_ONE ULTRON)*********************************
{ // Chapter1 Void Start*****************************************
system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************       STORY_ONE        ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout<<"\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
        if (i<10)
        Beep(0,200);
        if (i>=10 && i<20)
       Beep(0,100);
        if (i>=10)
      Beep(0,70);

    }


system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t  *After the S.H.I.E.L.D.,Tony Stark restarts a program with a peaceful purpose, creating Ultron \n";
cout <<"\t  *An advanced robot who is possessed by ideas of greatness.                                     \n";
cout <<"\t  *Soon, Ultron will turn against humanity                                                       \n";
cout <<"\t  *And it is up to the Avengers to stop his satanic plans.                                       \n";
system("pause");

system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          You are in the Avengers tower.                           \n";
    cout << "\t                          and you are ready to leave to find ultron \n";
system("pause");



    system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          As you move towards the hideout of Ultron  \n";
    cout << "\t                          suddenly two robots of the ultron appear in front of you \n";
    system("pause");
   
    system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          These robots can be easily destroyed with the powers you have! \n";
    cout << "\n ";
cout << "\t                          (Choose how you want to eliminate them) \n";
cout << "\t                          [1] Throw them up and hit them with punch \n";
    cout << "\t                          [2] Hit them with a laser from your eyes \n";
system("pause");


    while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
if (userInput == 1) // Throw them up and hit them with punch*********************************************************************
{
system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You beat them with one punch! \n";
cout << "\t                          Now you can continue flying to go to the ultron \n";
cout << "\t                          As you flying Stark sends you a text message \n";
cout << "\t                          You opening the message and it says: \n";
    cout << "\t                          Tony:We found the ultrons hideout! \n";
cout << "\t                          Tony:Is North of the old ammunition factory harry up! \n";
system("pause");
}
 else // Hit them with a laser from your eyes************************************************************************************
{
system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You melted them with your laser eyes! \n";
cout << "\t                          Now you can continue flying to go to the ultron \n";
cout << "\t                          As you flying Stark sends you a text message \n";
cout << "\t                          You opening the message and it says: \n";
cout << "\t                          Tony:We found the ultrons hideout! \n";
cout << "\t                          Tony:Is North of the old ammunition factory harry up! \n";
system("pause");
}
    system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          You are a few kilometers away to reach the ultron \n";
system("pause");
   
    system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          Five of the ultron robots were chasing you from behind \n";
    cout << "\t                          What are you going to do; \n";
    cout << "\t                          [1] Fly fast to lose them \n";
    cout << "\t                          [2] Stay and fight them\n";
system("pause");

while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) // Fly fast to lose the***************************************************************************
{
system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          The robots reached you and hit you with rockets containing krypton \n";
    system("pause");
   
    system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You were defeated \n";
cout << "\n";
cout << "\t                          [1] Retry \n";
    cout << "\t                          [2] Return to main_menu\n";

   while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) // Retry***********************************************************************
{

 Chapter1();
}
 else
{
 Game();
}

}
 else // Return to main_menu***************************************************************************
{
    system("cls");
cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
  cout << "\n";
    cout << "\n";
    cout << "\t \t \t \t WARNING!These robots are more sophisticated than usual \n";
    system("pause");
}
system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          They attack you from the right and from the left \n";
    cout << "\t                          What would you do? \n";
    cout << "\t                          [1]  Attack from  right\n";
    cout << "\t                          [2]  Attack from  left\n";
cout << "\t                          [3]  Fly up \n";
    system("pause");

while (!(cin >> userInput) || userInput < 1 || userInput > 3)
{
    cout <<"ERROR.You cannot choose more than 1 or 3  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) //attack from the right********************
{
system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t \t \t Õou went to attack from the right and hit you from the left with a rocket \n";
    system("pause");
   
system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You were defeated \n";
cout << "\n";
cout << "\t                          [1] Retry \n";
    cout << "\t                          [2] Return to main_menu \n";

   while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) // Retry***************************************************************************
{

 Chapter1();
}
 else // Return to main_menu****************************************************************************
{
 Game();
}


}
else if (userInput == 2) //Attack from the left*********************************************************
{
system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          You went to attack from the left and hit you from the right with a rocket \n";
    system("pause");
   
system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You were defeated \n";
cout << "\n";
cout << "\t                          [1] Retry \n";
    cout << "\t                          [2] Return to main_menu \n";

   while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) // Retry***************************************************************************
{

 Chapter1();
}
 else // Return to main_menu****************************************************************************
{
 Game();
}

}
 else //Fly up******************************************************************************************
 {
  system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
  cout << "\t                          You flew up and the enemys collided with each other \n";
  cout << "\t                          Enemys_left: 3 \n";
  system("pause");
  }
    system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
  cout << "\t                          They attack you from behind with lazer \n";
  cout << "\n";
  cout << "\t                          What is your next step? \n";
  cout << "\t                          [1] Dodje and throw laser too \n";
  cout << "\t                          [2] Dodje and run over him to punch him \n";
  system("pause");
 
  while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) // Dodje and throw laser too*****************************************************************************
{
system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
  cout << "\t                          You just dodged it and you threw it with laser \n";
  cout << "\t                          Enemys_left: 2 \n";
  system("pause");
 
  system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t                          (*****Lightning strikes*****)\n";
    Beep(0,4000);
   
    system("cls");
system("color 3");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                        THOR:The god of Thunder is here! \n";
Beep(0,3000);

system("cls");
system("color 3");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                        THOR:Bring me ULTRON!  \n";
Beep(0,3000);

system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                       (*****PUNCH**PUNCH**PUNCH*****)                                      \n";
Beep(0,3000);

system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                        ............................. \n";
Beep(0,3000);

system("cls");
system("color 3");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                        THOR:AAAAAA  \n";
Beep(0,2000);

system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                       (***** POOW! *****)                                      \n";                          
Beep(0,3000);

system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                   Thor saves you from Ultron robots! \n";
cout << "\t                                   Enemys_left:0                      \n";
system("pause");

system("cls");
system("color 3");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                   Thor:" << name << " are you ok? \n";
cout << "\t                                     Me: I could put them on myself Thor. \n";
cout << "\t                                   Thor: A thank you is not hard to say. \n";
cout << "\t                                   We are team and we help eachother. \n";
cout << "\t                                     Me: You are right im sorry. \n";
system("pause");

system("cls");
system("color 3");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                   Thor: You dont need to say sorry my child \n";
Beep(0,4000);

system("cls");
system("color 3");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                   Thor: We need to stop Ultron now! \n";
cout << "\t                                         The avengers needs us! \n";
cout << "\t                                         Follow me " << name << ". \n";
system("pause");

system("cls");
system("color 3");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                   Thor: The ultron is in there \n";
cout << "\t                                   to the old ammunition factory \n";
cout << "\t                                   We have to go in and stop it! \n";
system("pause");

system("cls");
system("color 3");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                        Thor:" << name << "\n";
Beep(0,3000);

system("cls");
system("color 3");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                        Thor: Be careful \n";
system("pause");

system("cls");
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\t \t \t \t \t \t--------------¦¦¦¦¦¦-------\n";
    cout << "\t \t \t \t \t \t------__¦¦¦¦¦¦¦¦¦¦¦¦_------ \n";
    cout << "\t \t \t \t \t \t----_¦¦¯¯----¦¦¦¦¦¦¦¦¦_---- \n";
    cout << "\t \t \t \t \t \t--_¦¦¯-------¦¦¦¦¦¦¦-¯¦¦_-- \n";
    cout << "\t \t \t \t \t \t-¦¦¦--------¦¦¦¦-¦¦¦---¦¦¦- \n";
    cout << "\t \t \t \t \t \t-¦¦¦--------¦¦¦¦-¦¦¦---¦¦¦- \n";
    cout << "\t \t \t \t \t \t¦¦¦--------¦¦¦¦--¦¦¦----¦¦¦ \n";
    cout << "\t \t \t \t \t \t¦¦¦--------¦¦¦¦--¦¦¦----¦¦¦ \n";
    cout << "\t \t \t \t \t \t¦¦¦-------¦¦¦¦---¦¦¦----¦¦¦ \n";
    cout << "\t \t \t \t \t \t¦¦¦------¦¦¦¦¦¦¦¦¦_-----¦¦¦ \n";
    cout << "\t \t \t \t \t \t¦¦¦------¦¦¦¦¦¦¦¦¦¯-----¦¦¦ \n";
    cout << "\t \t \t \t \t \t¦¦¦-----¦¦¦¦----¯-_¦----¦¦¦ \n";
    cout << "\t \t \t \t \t \t-¦¦¦----¦¦¦-----_¦¦¦---¦¦¦- \n";
    cout << "\t \t \t \t \t \t-¦¦¦_--¦¦¦¦-----------_¦¦¦- \n";
    cout << "\t \t \t \t \t \t--¯¦¦¦-¦¦¦---------__¦¦¦¯-- \n";
    cout << "\t \t \t \t \t \t------¦¦¦¦-¯¦¦¦¦¦¦¦¦¦¯¯---- \n";
    cout << "\t \t \t \t \t \t------¦¦¦------------------ \n";
    cout<<"\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
        if (i<10)
        Beep(0,200);
        if (i>=10 && i<20)
       Beep(0,100);
        if (i>=10)
      Beep(0,70);
    }

system("cls");
system("color c ");
cout << "\n \n \n \n \n \n \n \n \n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************       FINAL_PART       ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
    Beep(0,5000);
   
    system("cls");
system("color c ");
cout << "\n \n \n \n \n \n \n \n \n";
    cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ***************    You are in the last   ***************\n";
cout <<"\t \t \t \t ***************     part of the story    ***************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
    cout << "\n";
cout << "\t          Do you have something to say before you start?          \n";
cout << "\t         [1] No im ready!                                         \n";
cout << "\t         [2] Na min me kopsei o Kontopoulos                       \n";
system("pause");

while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) // No im ready! ***********************************************************************
 {
  system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                      Arlight Good lyck! \n";
system("pause");

Chapter1_FinalPart();
 }
 else // Na min me kopsei o Kontopoulos********************************************************************
 {
  system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                      Hahaha dont worry \n";
system("pause");

system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                     Tell him that you like to watching anime  \n";
cout << "\t                                     and it will put you 10 \n";
system("pause");

system("cls");
    cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                                      Arlight Good lyck! \n";
system("pause");

Chapter1_FinalPart();
 }

} // close if for: next step Dodje and throw  laser too***************************************************************
  else
{ // Dodje and run over him to punch him start************************************************************************************
system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
    cout << "\t \t \t As you were about to punch him, they threw rockets at you from behind \n";
    system("pause");

system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t \t \t \t You were defeated \n";
cout << "\n";
cout << "\t \t \t \t [1] Retry \n";
    cout << "\t \t \t \t [2] Return to main_menu \n";

while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}
 if (userInput == 1) // Retry***************************************************************************
{

 Chapter1();
}
 else // Return to main_menu****************************************************************************
{
 Game();
}

} // Dodje and run over him to punch him end************************************************************************************
 The_End();

//first if close*****************************************************************************************
} //void close*********************************************************************************************
void Chapter1_FinalPart()
{ //void Chapter1_FinalPart start**************************************************************************

system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You just entered the old ammunition factory with Thor     \n";
cout << "\t                          And that's where the avengers face the ultron             \n";
system("pause");


system("cls");
system("color 5");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Ultron: So...the Avengers are finnaly here!  \n";
Beep(0,3000);

system("cls");
system("color 3");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Thor: Ultronnnnn!                     \n";
Beep(0,3000);

system("cls");
system("color 4");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          IronMan: What are you trying to achieve ultron? \n";
Beep(0,3000);

system("cls");
system("color 5");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Ultron: Something that had to be done since technology evolved so much  \n";
cout << "\t                          we are the future,not humans.I will conquer your planet stark \n";
cout << "\t                          everything that you loveand all the people of the earth they will be lost forever! \n";
Beep(0,8000);


system("cls");
system("color 1");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          CaptainAmerica: You will not escape so easily Ultron! \n";
Beep(0,3000);

system("cls");
system("color 5");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Ultron: Ah...Captain America,Gods righteous man. \n";
cout << "\t                          preteding you could live without a war.I can physically \n";
cout << "\t                          throw up in my mouth \n";
Beep(0,6000);

system("cls");
system("color 3");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Thor: If you believe in peace and let us keep it \n";
Beep(0,3000);

system("cls");
system("color 5");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Ultron: I think you're confusing peace with quiet \n";
Beep(0,3000);

system("cls");
system("color 4");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          IronMan: Yeah whats the vibranium for? \n";
Beep(0,3000);

system("cls");
system("color 5");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Ultron: I'm glad you asked that because i wanted  \n";
cout << "\t                          to take this time to explain my evil plan...";
Beep(0,5000);

system("cls");
system("color");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Ultron(Sudden attack) \n";
Beep(0,3000);

system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          Ultron hit Iron Man with rockets. \n";
cout << "\t                          The robots have appeared and you are getting ready for battle. \n";
cout << "\t                          You have Captain America and Thor by your side. \n";
cout << "\t                          Five robots are coming at you,what are you going to do? \n";
cout << "\t                          [1] Throw lazer \n";
cout << "\t                          [2] Ask help from Thor \n";
cout << "\t                          [3] Ask help from Captain \n";
system("pause");

while (!(cin >> userInput) || userInput < 1 || userInput > 3)
{
    cout <<"ERROR.You cannot choose more than 1 or 3  \n";
cin.clear();
cin.ignore(100, '\n');
}

    if (userInput == 1)
{ // Throw lazer choice start****************************************************************************
system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You hit two out of five robots and the others  hit you with rockets! \n";
Beep(0,3000);

    system("cls");
cout << "\n \n \n \n \n \n \n \n \n";
cout << "\t                          You were defeated \n";
cout << "\n";
cout << "\t                          [1] Retry \n";
    cout << "\t                          [2] Return to main_menu \n";

while (!(cin >> userInput) || userInput < 1 || userInput > 2)
{
    cout <<"ERROR.You cannot choose more than 1 or 2  \n";
cin.clear();
cin.ignore(100, '\n');
}

   if (userInput == 1)
{
Chapter1_FinalPart();
}
   else
{

    Game();    
}

} // Throw lazer choice end****************************************************************************

   else if (userInput == 2)
{ // Ask help from thor start********************************************************************************
   system("cls");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: Thor threw lightning! \n";
   Beep(0,3000);
   
   system("cls");
   system("color 3");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                              Thor(LIGHTING DAMAGE)         \n";
   Beep(0,3000);
   
   
   system("cls");
   system("color 3");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Thor destroyed the robots with lightning          \n";
   cout << "\t                          Enemys left:2 \n";
   Beep(0,3000);
} // Ask help from thor********************************************************************************

 else
{ // Ask help from Captain start********************************************************************************
   system("cls");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: Captain Throw your shield! \n";
   Beep(0,3000);
   
   system("cls");
   system("color 1");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                              Captain(SHIELD DAMAGE)         \n";
   Beep(0,3000);
   
   
   system("cls");
   system("color 1");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Captain destroyed the robots with his shield         \n";
   
   Beep(0,3000);
} // Ask help from Captain end********************************************************************************

   system("cls");
   system("color 4");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          IronMan: Steven where is Banner? \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color 1");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          CaptainAmerica: I dont know! \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: I'm going to find Banner \n";                                                  
   Beep(0,3000);
   
   system("cls");
   system("color 4");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          IronMan: Go we have it all under control \n";                                                
   Beep(0,3000);
 
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                                    (strange sounds)  \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: Did you guys hear that? \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color 1");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          CaptainAmerica: Something is out there \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          More from ultron robots are coming \n";                                              
   Beep(0,3000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: There are too many! \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color 5");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Ultron: You will all die! \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Big steps are starting to get closer \n";                                                
   Beep(0,3000);
   
   system("cls");
   system("color 2");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          (AHHHHHHHHHH) \n";                                              
   Beep(0,3000);
   
   system("cls");
   system("color 5");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Ultron: Ah...it is time. \n";
   cout << "\t                          The time when the avengers will die \n";
   cout << "\t                          and we will conquer the earth and exile all the humanity! \n";                                              
   Beep(0,6000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: Thor i think Banner is here. \n";                                            
   Beep(0,3000);
   
   system("cls");
   system("color 5");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Ultron: Avengers say good bye \n";
   cout << "\t                          to your world we are unstoppable \n";                                            
   Beep(0,6000);
   
   system("cls");
   system("color 4");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          IronMan: Let me interrupt you for a moment sweatheart. \n";
   cout << "\t                          This is not the end for us. \n";
   cout << "\t                          Its the end for you. \n";
   Beep(0,5000);
   
   system("cls");
   system("color 4");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                                    IronMan:Also... \n";
   Beep(0,3000);
   
   system("cls");
   system("color 4");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                               IronMan: We have a hulk \n";
   Beep(0,2000);
   
   system("cls");
   system("color 2");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Hulk: HULK SMASH! \n";
   Beep(0,3000);
   
   system("cls");
   system("color 5");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Ultron: What is th... \n";
   Beep(0,2000);
   
   system("cls");
   system("color 2");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          (SMASH SMASH SMASH SMASH) \n";
   system("pause");
   
   system("cls");
   system("color 3");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Thor: Nice Banner! \n";
   cout << "\t                          "<< name << " this is your change! \n";
   Beep(0,4000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                            (Final choice) \n";
   cout << "\t                [1] Use all your strenght to destroy Ultron \n";
   system("pause");
   
    while (!(cin >> userInput) || userInput < 1 || userInput > 1)
{
    cout <<"ERROR.You cannot choose more than 1  \n";
cin.clear();
cin.ignore(100, '\n');
}
    if (userInput == 1 )
{
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: Ultronnnn \n";
   Beep(0,4000);
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Me: Say goodbye \n";
   Beep(0,4000);
   
   system("cls");
   system("color 5");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                          Ultron: Damn you " << name << "!!!! \n";
   Beep(0,4000);
     
   
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                                  (BIG EXPLOSION) \n";
   system("pause");
}

system("cls");
system("color 4");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\t \t \t \t \t \t--------------¦¦¦¦¦¦-------\n";
cout << "\t \t \t \t \t \t------__¦¦¦¦¦¦¦¦¦¦¦¦_------ \n";
cout << "\t \t \t \t \t \t----_¦¦¯¯----¦¦¦¦¦¦¦¦¦_---- \n";
cout << "\t \t \t \t \t \t--_¦¦¯-------¦¦¦¦¦¦¦-¯¦¦_-- \n";
cout << "\t \t \t \t \t \t-¦¦¦--------¦¦¦¦-¦¦¦---¦¦¦- \n";
cout << "\t \t \t \t \t \t-¦¦¦--------¦¦¦¦-¦¦¦---¦¦¦- \n";
cout << "\t \t \t \t \t \t¦¦¦--------¦¦¦¦--¦¦¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦--------¦¦¦¦--¦¦¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦-------¦¦¦¦---¦¦¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦------¦¦¦¦¦¦¦¦¦_-----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦------¦¦¦¦¦¦¦¦¦¯-----¦¦¦ \n";
cout << "\t \t \t \t \t \t¦¦¦-----¦¦¦¦----¯-_¦----¦¦¦ \n";
cout << "\t \t \t \t \t \t-¦¦¦----¦¦¦-----_¦¦¦---¦¦¦- \n";
cout << "\t \t \t \t \t \t-¦¦¦_--¦¦¦¦-----------_¦¦¦- \n";
cout << "\t \t \t \t \t \t--¯¦¦¦-¦¦¦---------__¦¦¦¯-- \n";
cout << "\t \t \t \t \t \t------¦¦¦¦-¯¦¦¦¦¦¦¦¦¦¯¯---- \n";
cout << "\t \t \t \t \t \t------¦¦¦------------------ \n";
cout<<"\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
        if (i<10)
        Beep(0,200);
        if (i>=10 && i<20)
       Beep(0,100);
        if (i>=10)
      Beep(0,70);

    }
   system("cls");
   system("color");
   cout << "\n \n \n \n \n \n \n \n \n";
   cout << "\t                                 Ultron has been defeat! \n";
   cout << "\t                          You save the world with the avengers \n";
   cout << "\t                                  (THANKS FOR PLAYING) \n";
   system("pause");
   
    The_End();
   
   
} // void chapter1_FinalPart end*************************************************************************
void Chapter2()
{
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************       STORY_TWO        ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
system("pause");

system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************      COMING_SOON       ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
system("pause");

ChooseClass();

The_End();
}
void Chapter3()
{
system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************      STORY_THREE       ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
system("pause");

system("cls");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
cout <<"\t \t \t \t ****************      COMING_SOON       ****************\n";
cout <<"\t \t \t \t *AVENGERS**************************************AVENGERS*\n";
system("pause");

ChooseClass();


The_End();

}
void The_End()
{
    system("cls");
cout <<"THE END" <<endl;
system("pause");

Game();
}

