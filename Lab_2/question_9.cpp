// Question 9 : Rock , Paper and Scizzor
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    cout<<"Welcome to rock,paper and scissors game!!"<<endl;
    int computer_wins = 0;
    int user_wins = 0;
    string game[3] = {"rock","paper","scissors"};
    while(true){
        string ans ;
        cout<<"Do you want to play the Game(yes/no).\n";
        cin>>ans;
        if(ans!="yes") break;
        string user; 
        cout<<"Choose rock or paper or scissors: "<<endl;  
        cin>>user;
        srand(time(0));
        int number = rand()%2;
        cout<<"Computer chose "<<game[number]<<endl;
        if(game[number]=="rock" and  user=="paper") {
            cout<<"User Wins!!\n";
            user_wins+=1;
        }
        else if(game[number]=="paper" and  user=="scissors") {
            cout<<"User Wins!!\n";
            user_wins+=1;
        }
        else if(game[number]=="scissors" and  user=="rock") {
            cout<<"User Wins!!\n";
            user_wins+=1;
        }
        else if(game[number]==user) {
            cout<<"Game has tied!!\n";
            user_wins+=1;
        }
        else {
            cout<<"Computer wins!!\n";
            computer_wins+=1;
        }
    } 
    cout<<"User scored "<<user_wins<<endl;
    cout<<"Computer scored "<<computer_wins<<endl;
    if(user_wins>computer_wins) cout<<"User won this match!!"<<endl;
    else cout<<"Computer Won this match"<<endl;
    cout<<"Thank you for playing this Game!!"<<endl;
}