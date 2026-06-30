
#include <iostream>
using namespace std;

//Function Declarations
int takechoice();
void checkbalance(const int &bal);
void depositmoney(int &bal);
void withdrawmoney(int &bal);

int takechoice(){
    cout<<"===== ATM ====="<<endl<<endl<<"1. Check Balance"<<endl<<"2. Deposit Money"<<endl<<"3. Withdraw Money"<<endl<<"4. Exit"<<endl<<endl;
    int choice;
    cout<<"Please Choose a Option From Above Menu : ";cin>>choice;
    while (!(choice>0 && choice <=4))
    {
        cout<<"Choose Valid Option!"<<endl;
        cout<<"Please Choose a Option From Above Menu : ";cin>>choice;
    }
    return choice;  
}

void checkbalance(const int& bal){
    cout<<"Your current Balance is : "<<bal<<endl;
}

void depositmoney(int &bal){
    cout<<"Your current Balance is : "<<bal<<endl;
    int amount;
    cout<<"Enter amount you want to deposit : ";cin>>amount;
    if (0<amount && amount<=100000)
    {
        cout<<"Money has been successfully depositd"<<endl;
        bal += amount;
        cout<<"Your current Balance is : "<<bal<<endl;
    }
    else cout<<"You can deposit amount between 1 to 1 Lakh only "<<endl;
}

void withdrawmoney(int &bal){
    int amount;
    cout<<"Enter amount you want to Withdraw : ";cin>>amount;
    if(0<amount && amount<=bal){
        cout<<"Money Withdrawal Successfull!"<<endl<<"Please Collect Your Money from the Machine"<<endl;
        bal -= amount;
        cout<<"Your current Balance is : "<<bal<<endl;
    }
    else if(amount>bal && amount<=100000){
        cout<<"Insufficient Balance"<<endl;
        cout<<"Your current Balance is : "<<bal<<endl;
    }
    else cout<<"You can withdraw between 1 to 1 Lakh Only"<<endl;
}



int main(){
    int balance = 5000;
    while (true)
    {
        int choice = takechoice();

        if(choice == 4){
            break;
        }

        else if(choice == 1){
            checkbalance(balance);
        }
        else if(choice == 2){
            depositmoney(balance);
        }
        else if(choice == 3){
            withdrawmoney(balance);
        }
    }
    
    cout<<"Session Ended"<<endl;
    return 0;
}