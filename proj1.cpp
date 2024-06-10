#include<iostream>
using namespace std;
int main()
{
int finalresult=0;
char playagain;
 int playQuiz(void);
 play:
finalresult=playQuiz();
cout<<"Your total score is ="<<finalresult<<endl;
if(finalresult>=6)
{
    cout<<"You are pass"<<endl;
    cout<<"Do you went to play again Quiz ? Yes or No"<<endl;
    cin>>playagain;
    if(playagain=='y'||playagain=='Y')
    {
     goto play;
    }
    else
    {
     cout<<"Thank you for playing Quiz"<<endl;
    }
}
else{
    cout<<"you are fail:"<<endl;
     cout<<"Do you went to play again Quiz ? Yes or No"<<endl;
    cin>>playagain;
    if(playagain=='y'||playagain=='Y')
    {
    playQuiz();
    }
    else
    {
     cout<<"Thank you for playing Quiz"<<endl;
    }
}
}
 int playQuiz()
    {
        char c;
        char option;
        int score = 0;
         PlayInside:
    cout<<"-------Welcome to Quize Game------------"<<endl;
    cout<<"--------------Please follow the Instructions----------------------"<<endl;
    cout<<"Step 1: Quize contains total Ten Question"<<endl;
    cout<<"Step 2: You will  give 1 marks for each right answer"<<endl;
    cout<<"Step 3: Ther will be no negative marking"<<endl;
    cout<<"Step 4: please press S to start the Quize"<<endl;
    cout<<"Step 5: plzz select option A,B,C,D:"<<endl;
     cout<<"Step 6:if you socre >=6 ,you will be pass Quiz:"<<endl;
        cin>>c;
        if(c=='S'||c=='s')
        {
        cout<<"Q1.what is the capital of india?"<<endl;
        cout<<"A.Delhi"<<endl;
        cout<<"B.Mumbai"<<endl;
        cout<<"C.Chennai"<<endl;
        cout<<"D.Kolkata"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q2.Who is the prime minister of india?"<<endl;
        cout<<"A.Narendra Modi"<<endl;
        cout<<"B.Rahul"<<endl;
        cout<<"C.Aditynath yogi"<<endl;
        cout<<"D.Arvind kejriwal"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q3.What is the national bird?"<<endl;
        cout<<"A.Peacock"<<endl;
        cout<<"B.Sparrow"<<endl;
        cout<<"C.Pigeon"<<endl;
        cout<<"D.Parrot"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q4.What is the capital of bihar?"<<endl;
        cout<<"A.Muzaffarpur"<<endl;
        cout<<"B.Gaya"<<endl;
        cout<<"C.Bhagalpur"<<endl;
        cout<<"D.Patna"<<endl;
        cin>>option;
        if(option=='d'||option=='D')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q5.What is the national animal of india?"<<endl;
        cout<<"A.Tiger"<<endl;
        cout<<"B.Lion"<<endl;
        cout<<"C.Elephant"<<endl;
        cout<<"D.Giraffe"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q6.What is the national flower of india?"<<endl;
        cout<<"A.Lotus"<<endl;
        cout<<"B.Rose"<<endl;
        cout<<"C.Lily"<<endl;
        cout<<"D.Sunflower"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q7.What is the national fruit of india?"<<endl;
        cout<<"A.Mango"<<endl;
        cout<<"B.Apple"<<endl;
        cout<<"C.Banana"<<endl;
        cout<<"D.Orange"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q8.What is the national game of india?"<<endl;
        cout<<"A.Chess"<<endl;
        cout<<"B.Cricket"<<endl;
        cout<<"C.Football"<<endl;
        cout<<"D.Hockey"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q9.What is the national language of india?"<<endl;
        cout<<"A.Hindi"<<endl;
        cout<<"B.English"<<endl;
        cout<<"C.Bengali"<<endl;
        cout<<"D.Tamil"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q10.What is the national sport of india?"<<endl;
        cout<<"A.Hockey"<<endl;
        cout<<"B.Cricket"<<endl;
        cout<<"C.Football"<<endl;
        cout<<"D.Chess"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        }
        else
        {
            cout<<"You have enter wrong value plzz enter S:"<<endl;
            goto PlayInside;
        }
        return score;
    }