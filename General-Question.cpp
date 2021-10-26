#include <iostream>
#include <string>
using namespace std;

int question(){
    cout<<"Now you will be asked some general question, answer them correctly. Good luck !"<<endl<<endl;

    //Questions are starting from here ~>

    //Question 1 -
    string q1;
    cout<<"Question 1 :- How many planets are there in the solar system ? : "<<endl<<endl<<"Options - "<<endl<<"A) 7"<<endl<<"B) 8"<<endl<<"C) 12"<<endl<<"D) 10"<<endl;
    cin>>q1;
    
    if(q1 == "B" || q1 == "8"){
        cout<<"Nice! You got the correct answer. Head over to the next question."<<endl;
    }

    else{
        cout<<"Wrong Answer! Try again."<<endl;
        exit;
    }

    //Question 2 - 
    string q2;
    cout<<"Question 2 :- What is the most invaded country in the world ? : "<<endl<<endl<<"Options - "<<endl<<"A) America"<<endl<<"B) Chad"<<endl<<"C) Scotland"<<endl<<"D) India"<<endl;
    cin>>q1;
    
    if(q1 == "D" || q1 == "India" || q1 == "india"){
        cout<<"Head over to the next question now."<<endl;
    }

    else{
        cout<<"Wrong Answer! Try again later."<<endl;
        quick_exit;
    }

    // Question 3 -

    string q3;
    cout<<"Question 3 :- What will be the Compound Interest, if compounded yearly."<<endl<<"Principle = ₹4000 , Rate = 5% , Time period = 2 years"<<endl<<endl<<"Options - "<<endl<<"A) ₹410"<<endl<<"B) ₹4410"<<endl<<"C) ₹398"<<endl<<"D) ₹1345"<<endl;
    cin>>q1;
    
    if(q1 == "A" || q1 == "410"){
        cout<<"Head over to the next question now."<<endl;
    }

    else{
        cout<<"Wrong Answer! Try again later."<<endl;
        quick_exit;
        }

    // Question 4 -
    string q4;
    cout<<"Question 4 :- What will be the Compound Interest, if compounded yearly."<<endl<<"Principle = ₹4000 , Rate = 5% , Time period = 2 years"<<endl<<endl<<"Options - "<<endl<<"A) ₹410"<<endl<<"B) ₹4410"<<endl<<"C) ₹398"<<endl<<"D) ₹1345"<<endl;
    cin>>q1;
    
    if(q1 == "A" || q1 == "410"){
        cout<<"Head over to the next question now."<<endl;
    }

    else{
        cout<<"Wrong Answer! Try again later."<<endl;
        quick_exit;
    }

    // Questions will end here <~
    return 0;
}

int main(){

    string start_or_not;
    cout<<"<<                                       THE GENERAL QUESTION                                        >>"<<endl;
    cout<<"Hello user ! Welcome to my very basic game ! In this game you will be asked some questions, and you have to answer them correctly in order to win ! Ok so now lets begin."<<endl;
    cout<<"Enter YES to begin and NO to exit : ";

    cin>>start_or_not;

    if(start_or_not == "yes" || start_or_not == "Yes" || start_or_not == "YES"){
        cout<<"Now the game will begin..."<<endl;
        return question();
    }

    else if(start_or_not == "no" || start_or_not == "NO" || start_or_not == "No"){
        cout<<"Canceling..."<<endl;
        exit;
    }

    else{
        cout<<"Invalid input. Type Yes/No ."<<endl<<"YES to begin and NO to cancel"<<endl<<endl<<"Try again !"<<endl;
        return main();
    }
    return 0;
}