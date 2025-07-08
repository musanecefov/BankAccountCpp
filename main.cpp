#include <iostream>
#include <string>
using namespace std;



class BankAccount{
private:
    string ownerName;
    long long accountNumber;
    double balance;
public:
    BankAccount(string o){
        ownerName=o;
        accountNumber=0;
        balance=0.0;
        
    }
    BankAccount(string o,long long  a,double b){
        ownerName=o;
        accountNumber=a;
        balance=b;
        
    }
    ~BankAccount(){
        
        cout<<"Bank account for the "<<ownerName<<" is deleted."<<'\n';
    }
    
    void displayInfo() const {
        cout<<"Name of owner: "<<ownerName<<'\n'<<"Account Number: "<<accountNumber<<'\n'<<"Your balance is: "<<balance<<'\n';
        
    }
    void deposit(){
        cout<<"Please enter a amount you want to deposit: "<<'\n';
        double amount;
        cin>>amount;
        if (amount <= 0) {
        cout << "Amount must be positive.\n";
        return;
    }
        cout<<ownerName<<" you deposited "<<amount<<" to your account.";
        balance=balance+amount;
        cout<<"Your balance is: "<<balance<<'\n';
        
    }
    void withdraw(){
        cout<<"Please enter a amount you want to withdraw: "<<'\n';
        double amount;
        cin>>amount;
        if (amount <= 0) {
        cout << "Amount must be positive.\n";
        return;
    }
        if (amount > balance) {
        cout << "Insufficient funds.\n";
        return;
    }
        cout<<ownerName<<" you withdrew "<<amount<<" to your account.";
        balance=balance-amount;
        cout<<"Your balance is: "<<balance<<'\n';
    }
    
    
    
    
    
};



int main(){
    BankAccount b1("Musa",1234432112014567,122);
    BankAccount b2("Ali",1234567890123456,1000);
    b1.displayInfo();
    b1.deposit();
    b1.withdraw();
    
    
    
    
    b2.displayInfo();
    b2.deposit();
    b2.withdraw();
    
  return 0;  
}