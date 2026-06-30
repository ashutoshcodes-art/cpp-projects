
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <fstream>
using namespace std;

struct Account{
    string name;
    int accno;
    int balance;
};

int choice();
int findaccindex(const vector<Account>&a,int accno);
void showacc(const vector <Account>& a,int i);
int takeint();
void createacc(vector<Account>& a);
void viewacc(const vector<Account>& a);
void searchacc(const vector<Account>& a);
void Depositemoney(vector<Account>& a);
void Withdrawmoney(vector<Account>& a);
void TransferMoney(vector<Account>& a);
void DeleteAcc(vector<Account>& a);
bool chkuniqueacc(const vector<Account>& a,int num);
void saveaccounts(const vector<Account>& a);
void loadaccounts(vector<Account>& a);

void saveaccounts(const vector<Account>& a)
{
    ofstream fout("accounts.txt");

    for(size_t i = 0; i < a.size(); i++)
    {
        fout << a[i].name << endl;
        fout << a[i].accno << endl;
        fout << a[i].balance << endl;
    }

    fout.close();
}

void loadaccounts(vector<Account>& a)
{
    ifstream fin("accounts.txt");

    if(!fin)
    {
        return;
    }

    Account temp;

    while(fin >> temp.name >> temp.accno >> temp.balance)
    {
        a.push_back(temp);
    }

    fin.close();
}

bool chkuniqueacc(const vector<Account>& a,int num){
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i].accno==num){
            return false;
        }
    }
    return true;
}

int takeint(){
    int num;
    while (true)
    {
        cin>>num;
        if(cin.fail()){
            cout<<"Please enter a number only : ";
            cin.clear();
            cin.ignore(
                numeric_limits<streamsize>::max(),
                '\n'
            );
        }
        else break;
    }
    return num;
}

void showacc(const vector <Account>& a,int i){
    cout<<"Account Holders Name : "<<a[i].name<<endl;
    cout<<"Account Number : "<<a[i].accno<<endl;
    cout<<"Balance : "<<a[i].balance<<endl;
}

int choice(){
    int choice;
    cout<<"\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n\n1. Create Account\n2. View All Accounts\n3. Search Account\n4. Deposit Money\n5. Withdraw Money\n6. Transfer Money\n7. Delete Account\n8. Exit\n";
    while (true)
    {
        cout<<"Choose an Option from the Menu : ";
        choice = takeint();
        if(choice>=1 && choice<=8){
            return choice;
        }
        else {
            cout<<"Select Valid Option\n";
        }
    }
}

void createacc(vector<Account>& a){
    Account temp;
    cout<<"CREATING NEW ACCOUNT!\n";
    // cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Enter Account Holders First Name : ";cin>>temp.name;
    cout<<"Enter Account Number : ";temp.accno = takeint();
    while (!(chkuniqueacc(a,temp.accno)) || temp.accno <=0)
    {
        cout<<"\nEnter Valid Unique Account Number : ";
        temp.accno = takeint();
    }
    cout<<"Enter Deposited Balance : ";temp.balance = takeint();
    while (temp.balance<0)
    {
        cout<<"Enter Valid Deposited Balance : ";temp.balance = takeint();        
    }
    
    cout<<"ACCOUNT CREATED SUCCESSFULLY!\n";
    a.push_back(temp);
    saveaccounts(a);
}

void viewacc(const vector<Account>& a){
    if(a.empty()){
        cout<<"\nNO ACCOUNTS ARE AVAILABLE TO SHOW\n";
    }
    else {
        for (size_t i = 0; i < a.size(); i++)
        {
            cout<<"\n[S NO. "<<i+1<<"]\n";
            showacc(a,i);
        }
    }
}

void searchacc(const vector<Account>& a){
    if(a.empty()){
        cout<<"\nNO ACCOUNTS AVAILABLE TO SEARCH\n";
    }
    else {
        int accnum;
        cout<<"Enter Account number to Search : ";accnum = takeint();
        int index = findaccindex(a,accnum);
        if(index== -1){
            cout<<"ACCOUNT NOT FOUND!\n";
        }
        else{
            showacc(a,index);
        }
    }
}

void Depositemoney(vector<Account>& a){
    if(a.empty()){
        cout<<"\nNO ACCOUNTS AVAILABLE FOR THIS OPERATION\n";
    }
    else {
        int num;
        cout<<"TO DEPOSIT MONEY!!\n";
        cout<<"Enter Account Number : ";num= takeint();
        int index = findaccindex(a,num);
        if(index == -1){
            cout<<"ACCOUNT NOT FOUND!\n";
        }
        else{
            int amount;
            cout<<"Enter Amount to Deposite : ";amount = takeint();
            while (!(amount>0 && amount<=100000))
            {
                cout<<"Enter Valid Amount to Deposite : ";amount = takeint();
            }
            a[index].balance += amount;
            cout<<"Balance of "<<amount<<" has added Successfully to "<<a[index].name<<"'s Account\n";
            saveaccounts(a);
        }
    }
}

void Withdrawmoney(vector<Account>& a){
    if(a.empty()){
        cout<<"\nNO ACCOUNTS AVAILABLE FOR THIS OPERATION\n";
    }
    else {
        cout<<"TO WITHDRAW MONEY!!\n";
        int num;
        cout<<"Enter Account Number : ";num = takeint();
        int index = findaccindex(a,num);
        if(index == -1){
            cout<<"ACCOUNT NOT FOUND!\n";
        }
        else{
            int amount;
            cout<<"Enter Amount to Withdraw : ";amount = takeint();
            while (!(amount>0 && amount<=a[index].balance))
            {
                cout<<"Enter Valid Amount to Withdraw : ";amount = takeint();
            }
            a[index].balance -= amount;
            cout<<"PLEASE COLLECT YOUR CASH!!\nNEW BALANCE : "<<a[index].balance<<"\n";
            saveaccounts(a);
        }
    }
}

int findaccindex(const vector<Account>&a,int accnum)
{
        for (size_t i = 0; i < a.size(); i++)
        {
            if(a[i].accno==accnum){
                return i;
            }
        }
        return -1;
}

void TransferMoney(vector<Account>& a){
    if(a.size()<=1){
        cout<<"Atleast 2 Accounts Required to Tramsfer Money!!\nPLEASE ADD MORE ACCOUNTS TO PERFORM THIS OPERATION\n";
    }
    else {
        int from,to;
        cout<<"ENTER TRANSFER DETAILS : \nTRANSFERRING FROM(PAYER ACC NO.) : ";from = takeint();
        int index1 = findaccindex(a,from);
        if(index1 == -1){
            cout<<"PAYER ACCOUNT NUMBER INVALID\nOPERATION CANCELLED!\n";
        }
        else{
                cout<<"TRANFERRING TO(RECEIVER ACC NO.) : ";to = takeint();
                int index2 = findaccindex(a,to);
                if(from==to){
                    cout<<"Can't Transfer to Same Account!!\n";
                }
                else if (index2== -1)
                {
                    cout<<"RECEIVERS ACCOUNT NUMBER INVALID!!\nOPERATION CANCELLED\n";
                }
                else{
                    int amount;
                    cout<<"Enter amount to TRANSFER : ";amount = takeint();
                    while (!(amount>0 && amount<=a[index1].balance))
                    {
                        cout<<"You can only Trasnfer amount between [ 0 to "<<a[index1].balance<<" ]\n";
                        cout<<"Enter amount to TRANSFER : ";amount = takeint();
                    }
                    a[index1].balance -= amount;
                    a[index2].balance += amount;
                    cout<<amount<<" has been successfully transferred from ACC NO. "<<from<<" to "<<to<<endl;
                    saveaccounts(a);
                 }
        }    
    }
}

void DeleteAcc(vector<Account>& a){
    if(a.empty()){
        cout<<"\nNO ACCOUNTS AVAILABLE TO DELETE\n";
    }
    else {
        int accnum;
        cout<<"Enter Account number to Delete : ";accnum = takeint();
        int index = findaccindex(a,accnum);
        if(index == -1){
            cout<<"ACCOUNT NOT FOUND!\n";
        }
        else{
            cout<<"\nACCOUNT DETAILS : \n";
            showacc(a,index);
            cout<<"THIS ACOUNT IS DELETED\nKINDLY COLLECT YOUR REMAINING BALANCE OF "<<a[index].balance<<endl;
            a.erase(a.begin() + index);
            saveaccounts(a);
        }
    }
}

int main(){
    vector<Account> bankacc;

    loadaccounts(bankacc);
    int option;
    
    while (true)
    {

        option = choice();
        
        if(option==1){
            createacc(bankacc);
        }
        else if(option==2){
            viewacc(bankacc);
        }
        else if(option==3){
            searchacc(bankacc);
        }
        else if(option==4){
            Depositemoney(bankacc);
        }
        else if(option==5){
            Withdrawmoney(bankacc);
        }
        else if(option==6){
            TransferMoney(bankacc);
        }
        else if(option==7){
            DeleteAcc(bankacc);
        }
        else break;
    }
    
    cout<<"Exited Successfully";

    return 0;
}