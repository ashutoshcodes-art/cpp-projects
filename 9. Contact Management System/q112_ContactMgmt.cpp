
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <fstream>
#include <iomanip>
using namespace std;

struct Contact{
    string name;
    string phone;
};

void loadcontact(vector<Contact>& a);
void savecontact(const vector<Contact>& a);
void printheader();
void printrow(const Contact& a,int id);
int takeint();
void viewcontacts(const vector<Contact>& a);
bool chkuniquephnno(const vector<Contact>& a,string num);
void DeleteContact(vector<Contact>& a);
void Updatecontact(vector<Contact>&a);
int findindex(const vector<Contact>&a,string num);
bool validPhone(string phone);

bool validPhone(string phone)
{
    if(phone.length()!=10)
        return false;

    for(char ch : phone)
    {
        if(!isdigit(ch))
            return false;
    }

    return true;
}

void loadcontact(vector<Contact>& a){
    ifstream fin("contacts.txt");
    
    if(!fin){
        return;
    }
    
    Contact temp;

    // fin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (getline(fin,temp.name))
    {        
        getline(fin,temp.phone);
        a.push_back(temp);
    }
    fin.close();
}

bool chkuniquephnno(const vector<Contact>& a,string num){
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i].phone==num){
            return false;
        }
    }
    return true;
}

void savecontact(const vector<Contact>& a){
    ofstream fout("contacts.txt");
    
    for (size_t i = 0; i < a.size(); i++)
    {
        fout<<a[i].name<<endl;
        fout<<a[i].phone<<endl;
    }
    fout.close();
}

void printheader(){
    cout<<left
    <<setw(8)<<"S No."
    <<setw(25)<<"Contact Name"
    <<setw(12)<<"Phone No."
    <<endl;
    cout<<setfill('-')<<setw(46)<<""<<setfill(' ')<<endl;
}

void printrow(const Contact& a,int id){
    cout<<left
    <<setw(8)<<id+1
    <<setw(25)<<a.name
    <<setw(12)<<a.phone
    <<endl;
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

int choice(){
    int choice;
    cout<<"\n===== CONTACT MANAGEMENT =====\n1. Add Contact\n2. View All Contacts\n3. Search Contact\n4. Update Contact\n5. Delete Contact\n6. Exit\n";
    while (true)
    {
        cout<<"Choose an Option from the Menu : ";
        choice = takeint();
        if(choice>=1 && choice<=6){
            return choice;
        }
        else {
            cout<<"Select Valid Option\n";
        }
    }
}

void addcontact(vector<Contact>& a){
    Contact temp;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"ADDING NEW CONTACT!\n";
    cout<<"Enter Name : ";getline(cin,temp.name);
    cout<<"Enter Phone No. : ";getline(cin,temp.phone);
    while (!validPhone(temp.phone) || !chkuniquephnno(a,temp.phone))
    {
        cout<<"\nEnter Unique PHONE NUMBER : ";
        // cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter Phone No. : ";getline(cin,temp.phone);
        
    }
    
    cout<<"contact ADDED SUCCESSFULLY!\n";
    a.push_back(temp);
    savecontact(a);
}

void searchcontacts(const vector<Contact>& a){
    if(a.empty()){
        cout<<"\nPLEASE ADD CONTACTS FIRST!!\n";
    }
    else {
        string phonenum;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Enter PHONE NUMBER to Search : ";getline(cin,phonenum);
        int index = findindex(a,phonenum);
        if(index== -1){
            cout<<"CONTACT NOT FOUND!\n";
        }
        else{
            printheader();
            printrow(a[index],index);
        }
    }
}

int findindex(const vector<Contact>&a,string num)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i].phone==num){
            return i;
        }
    }
    return -1;
}

void viewcontacts(const vector<Contact>& a){
    if(a.empty()){
        cout<<"\nPLEASE ADD CONTACTS FIRST\n";
    }
    else {
        printheader();
        for (size_t i = 0; i < a.size(); i++)
        {
            printrow(a[i],i);
        }
    }
}

void DeleteContact(vector<Contact>& a){
    if(a.empty()){
        cout<<"\nPLEASE ADD CONTACTS FIRST!!\n";
    }
    else {
        string phonenum;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Enter PHONE NUMBER to Search : ";getline(cin,phonenum);
        int index = findindex(a,phonenum);
        if(index== -1){
            cout<<"CONTACT NOT FOUND!\n";
        }
        else{
            printheader();
            printrow(a[index],index);
            a.erase(a.begin() + index);
            cout<<"CONTACT has been Deleted";
            savecontact(a);
        }
    }
}

void Updatecontact(vector<Contact>&a){
    if(a.empty()){
        cout<<"\nPLEASE ADD CONTACTS FIRST!!\n";
    }
    else {
        string phonenum;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Enter PHONE NUMBER to Search CONTACT TO UPDATE  : ";getline(cin,phonenum);
        int index = findindex(a,phonenum);
        if(index== -1){
            cout<<"CONTACT NOT FOUND!\n";
        }
        else{
            printheader();
            printrow(a[index],index);
            cout<<"What you want to Update in this Contact\n1. Name\n2. Number\n";
            int option;
            cout<<"Select an Option from above : ";option = takeint();
            while (!(option == 1 || option ==2))
            {
                cout<<"Select Valid Option from above : ";option = takeint();
            }
            if(option==1){
                string name;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Enter New Name : ";
                getline(cin,name);
                a[index].name = name;
                cout<<"Details Successfully updated : \n";
                printheader();
                printrow(a[index],index);
            }
            else if(option==2){
                string num;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Enter New Phone : ";
                getline(cin,num);
                while (!validPhone(num) || !chkuniquephnno(a,num))
                {
                    cout<<"\nEnter Unique PHONE NUMBER : ";
                    // cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    cout<<"Enter Phone No. : ";getline(cin,num);
                    
                }
                a[index].phone = num;
                cout<<"Details Successfully updated : \n";
                printheader();
                printrow(a[index],index);
            }
            savecontact(a);
        }
    }
}

int main(){
    vector<Contact> contacts;
    loadcontact(contacts);
    int option;
    while (true)
    {
        
        option = choice();
        
        if(option==1){
            addcontact(contacts);
        }
        else if(option==2){
            viewcontacts(contacts);
        }
        else if(option==3){
            searchcontacts(contacts);
        }
        else if(option==4){
            Updatecontact(contacts);
        }
        else if(option==5){
            DeleteContact(contacts);
        }
        else {
            break;
        }
    }
    cout<<"EXITED SUCCESSFULLY!!";
    return 0;
}