#include<iostream>
using namespace std;
class Bank_Deposit{
    private:
    int account_number;
    string account_holder;
    int balance;
    public:
    Bank_Deposit(int number,string holder,int amount){
        account_number = number;
        account_holder = holder;
        balance = amount ;
    }
    void deposit(int money){
        cout<<"The amount of $"<<money<<" has been deposited."<<endl;
        cout<<"Your Current balance: $"<<balance+money<<endl;    
    }
    void withdraw(int money){
        if(money > balance){
            cout<<"Your balance is less than your withdraw amount."<<endl;
        }
        else{
        cout<<"The amount of $"<<money<<" has been withdraw."<<endl;
        cout<<"Your Current balance: $"<<balance-money<<endl;
        }   
    }
};
int main(){
    int account_number , balance ;
    string account_holder;
    cout<<"Enter the account number: ";
    cin>>account_number;
    cout<<"Enter the balance: ";
    cin>>balance;
    cout<<"Enter the account holder name: ";
    cin>>account_holder;
    Bank_Deposit b(account_number,account_holder,balance);
    while (true){
        string ans;
        cout<<"Which Type of Function you want to perform \n1)Deposit \n2)Withdraw \n3)End "<<endl;
        cin>>ans;
        if(ans == "deposit"){
            int amount;
            cout<<"Enter the amount you want to deposit: ";
            cin>>amount;
            b.deposit(amount);
        }
        else if(ans=="withdraw"){
            int amount;
            cout<<"Enter the amount you want to withdraw: ";
            cin>>amount;
            b.deposit(amount);
        }
        else{
            break;
        }


    }
    return 0;

}