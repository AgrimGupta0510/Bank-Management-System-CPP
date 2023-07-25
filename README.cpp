# Bank-Management-System-CPP

#include<bits/stdc++.h>
using namespace std;

class RBI{
    double rate;
    double balance;

    public:
    void setrate(int r){
        if(r>=4){
            rate=r;
        }
        else{
            cout<<"enter more rate of interest"<<endl;
        }
    }
    int getrate(){
        return rate;
    }
    void setbalance(int b){
        if(b>=1000){
        balance=b;
        }
        else{
            cout<<"enter more balance"<<endl;
        }
    }
    int getbalance(){
        return balance;
    }

    void deposit(double d){

        balance+=d;
        cout<<"the remaining balance after depositing is :"<<balance<<endl;
    }
    void withdraw( double w){
        if(w<=balance){
        balance-=w;
        }
        else{
            cout<<"you are withdrawing more than balance"<<endl;
        }
        cout<<"the remaining balance after withdrawing is :"<<balance<<endl;
    }

};

class COSTUMER{
    int CostumerID;
    
    public:
    void setCostumerID(int id){
        CostumerID=id;
    }
    int getCostumerID(){
        return CostumerID;
    }
    
};

class ACCOUNT{
    int AccountNumber;
    
    public:
    void setAccountNumber(int id){
        AccountNumber=id;
    }
    int getAccountNumber(){
        return AccountNumber;
    }
};

class SBI : public RBI, public COSTUMER, public ACCOUNT{

};

class ICICI : public RBI, public COSTUMER, public ACCOUNT{

};

int main(){

    ICICI a1;
    a1.setrate(5);
    a1.setbalance(2000);
    a1.setAccountNumber(111000);
    a1.setCostumerID(11111);

    a1.withdraw(1000);
    a1.deposit(3000);
    
    SBI b1;
    b1.setrate(4);
    b1.setbalance(3000);
    b1.setAccountNumber(111001);
    b1.setCostumerID(11221);

    b1.withdraw(1000);
    b1.deposit(3000);
    
    return 0;
}
