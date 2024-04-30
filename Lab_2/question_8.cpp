// Question 8 : number guessing game
#include<iostream>
#include<ctime>
using namespace std;
int main(){
   cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
   cout<<"Welcome to number guessing game!!!"<<endl;
   cout<<"This game will generate the random number between 1 and 50 and you have to guess that number.";
   srand(time(0));
   int number = 1+rand()%50;
   while(true){
    int guess ;
    cout<<"\nEnter the number: ";
    cin>>guess;
    if(guess>number) cout<<"You are above the number";
    else if (guess<number) cout<<"You are below the number";
    else {
        cout<<"You guessed the correct number";
        break;
    }    
   }   
}
