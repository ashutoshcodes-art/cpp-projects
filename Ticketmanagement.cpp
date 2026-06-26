/*
===== TICKET BOOKING SYSTEM =====

1. Add Show
2. View Shows
3. Search Show
4. Book Ticket
5. Cancel Ticket
6. View Booked Tickets
7. Delete Show
8. Exit
*/

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <fstream>
#include <iomanip>
using namespace std;

struct Show{
    string Moviename;
    int showid;
    int availableseats;
    int totalseats;
};

int choice();
int takeint();
void addshow(vector<Show>& a);
void viewshows(const vector<Show>& a);
void searchshows(const vector<Show>& a);
void BookTicket(vector<Show>& a);
void CancelTicket(vector<Show>& a);
void ViewBookedTickets(const vector<Show>& a);
void Deleteshow(vector<Show>& a);
bool chkuniqueshowid(const vector<Show>& a,int num);
void showdetail(const vector <Show>& a,int i);
int findshowid(const vector<Show>&a,int id);
void saveshows(const vector<Show>& a);
void loadshows(vector<Show>& a);

void saveshows(const vector<Show>& a)
{
    ofstream fout("Showdata.txt");

    for(size_t i = 0; i < a.size(); i++)
    {
        fout << a[i].Moviename << endl;
        fout << a[i].showid << endl;
        fout << a[i].availableseats << endl;
        fout << a[i].totalseats << endl;
    }

    fout.close();
}

void loadshows(vector<Show>& a)
{
    ifstream fin("Showdata.txt");

    if(!fin)
    {
        return;
    }

    Show temp;

   while (getline(fin, temp.Moviename))
{
    fin >> temp.showid;
    fin >> temp.availableseats;
    fin >> temp.totalseats;

    fin.ignore(numeric_limits<streamsize>::max(), '\n');

    a.push_back(temp);
}

    fin.close();
}

void ViewBookedTickets(const vector<Show>& a){
    if(a.empty()){
        cout<<"\nNO SHOWS AVAILABLE\n";
    }
    else {
    //    int id;
    //    cout<<"Enter SHOW ID to See Booked Tickets : ";id = takeint();
    //    int index = findshowid(a,id);
    //    if(index == -1){
    //     cout<<"SHOW NOT FOUND!\n";
    //    }
    //    else{
    //     showdetail(a,index);
    //     cout<<"Booked Tickets : "<<a[index].totalseats - a[index].availableseats<<endl;
    //    }

       cout<<left
            <<setw(8)<<"S No."
            <<setw(30)<<"Movie Name"
            <<setw(10)<<"Show ID"
            <<setw(10)<<"Booked"
            <<setw(10)<<"Total Seats"
            <<endl;
        cout<<setfill('-')<<setw(68)<<""<<setfill(' ')<<endl;
       for (size_t i = 0; i < a.size(); i++)
       {
        int booked = a[i].totalseats - a[i].availableseats;
        cout<<left
            <<setw(8)<<i+1
            <<setw(30)<<a[i].Moviename
            <<setw(10)<<a[i].showid
            <<setw(10)<<booked
            <<setw(10)<<a[i].totalseats
            <<endl;
       }
       
    }
}

void CancelTicket(vector<Show>& a){
    if(a.empty()){
        cout<<"\nNO SHOWS AVAILABLE\n";
    }
    else {
        int id;
        cout<<"Enter SHOW ID to Cancel Tickets : ";id = takeint();
        int index = findshowid(a,id);
        if (index == -1)
        {
            cout<<"SHOW NOT FOUND\n";
        }
        else{
            if(a[index].availableseats==a[index].totalseats){
                cout<<"No Tickets Available to Cancel\n";
            }
            else{
            int num;
                cout<<"How many Tickets You want to Cancel : ";num = takeint();
                int bookedtickets = a[index].totalseats - a[index].availableseats;
                if(num>bookedtickets){
                    cout<<"Invalid number of seats.\n";
                }
                else if(num>0 && num<=bookedtickets){
                    cout<<"YOU'VE SUCCESSFULLY CANCELLED "<<num<<" TICKETS OF SHOW "<<a[index].Moviename<<endl;
                    a[index].availableseats+=num;
                    saveshows(a);
                }
            }
        }
        
        
    }
}

void BookTicket(vector<Show>& a){
    if(a.empty()){
        cout<<"\nNO SHOWS AVAILABLE\n";
    }
    else {
        cout<<"SHOWS AVAIL TO BOOK : \n";
        viewshows(a);
        int id;
        cout<<"Enter SHOW ID to Book Tickets : ";id = takeint();
        int index = findshowid(a,id);
        if (index == -1)
        {
            cout<<"SHOW NOT FOUND\n";
        }
        else{
            int num;
            cout<<"How many Tickets You want to Book : ";num = takeint();
            if(a[index].availableseats==0){
                cout<<"Sorry no Seats are Left to Book\n";
            }
            else if(num<=0 || num>a[index].availableseats){
                cout<<"Invalid number of seats";
            }
            else if(num>0 && num<=a[index].availableseats){
                cout<<"YOU'VE SUCCESSFULLY BOOKED "<<num<<" SEATS OF SHOW "<<a[index].Moviename<<endl;
                a[index].availableseats-=num;
                saveshows(a);
            }
        }
        
        
    }
}

int findshowid(const vector<Show>&a,int id)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i].showid==id){
                return i;
            }
        }
        return -1;
}

void searchshows(const vector<Show>& a){
    if(a.empty()){
        cout<<"\nNO SHOWS AVAILABLE TO SEARCH\n";
    }
    else {
        int accnum;
        cout<<"Enter SHOW ID to Search : ";accnum = takeint();
        int index = findshowid(a,accnum);
        if(index== -1){
            cout<<"SHOW NOT FOUND!\n";
        }
        else{
            showdetail(a,index);
        }
    }
}

bool chkuniqueshowid(const vector<Show>& a,int num){
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i].showid==num){
            return false;
        }
    }
    return true;
}

int choice(){
    int choice;
    cout<<"\n===== TICKET BOOKING SYSTEM =====\n1. Add Show\n2. View Shows\n3. Search Show\n4. Book Ticket\n5. Cancel Ticket\n6. View Booked Tickets\n7. Delete Show\n8. Exit\n";
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

void showdetail(const vector <Show>& a,int i){
    cout<<"Show Name : "<<a[i].Moviename<<endl;
    cout<<"Show ID : "<<a[i].showid<<endl;
    cout<<"Available Seats : ["<<a[i].availableseats<<"/"<<a[i].totalseats<<"]\n";
    // cout<<"Total Seats : "<<a[i].totalseats<<endl;
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

void addshow(vector<Show>& a){
    Show temp;
    cout<<"ADDING NEW SHOW!\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Enter Show Name : ";getline(cin,temp.Moviename);
    cout<<"Enter Show ID : ";temp.showid = takeint();
    while (!(chkuniqueshowid(a,temp.showid)) || temp.showid <=0)
    {
        cout<<"\nEnter Valid Unique SHOW ID : ";
        temp.showid = takeint();
    }
    cout<<"Enter Total Seats : ";temp.totalseats = takeint();
    while (temp.totalseats<=0)
    {
        cout<<"Enter Valid Number of SEATS : ";temp.totalseats = takeint();        
    }
    temp.availableseats = temp.totalseats;
    
    cout<<"SHOW ADDED SUCCESSFULLY!\n";
    a.push_back(temp);
    saveshows(a);
}

void viewshows(const vector<Show>& a){
    if(a.empty()){
        cout<<"\nNO SHOWS ARE AVAILABLE\n";
    }
    else {
        for (size_t i = 0; i < a.size(); i++)
        {
            cout<<"\n[S NO. "<<i+1<<"]\n";
            showdetail(a,i);
        }
    }
}

void Deleteshow(vector<Show>& a){
    if(a.empty()){
        cout<<"\nNO SHOWS AVAILABLE\n";
    }
    else {
        int id;
        cout<<"Enter SHOW ID to Delete : ";id = takeint();
        int index = findshowid(a,id);
        if(index == -1){
            cout<<"SHOW NOT FOUND!\n";
        }
        else{
            cout<<"\nSHOW DETAILS : \n";
            showdetail(a,index);
            cout<<"SHOW HAS BEEN DELETED SUCCESSFULLY!\n";
            a.erase(a.begin() + index);
            saveshows(a);
        }
    }
}

int main(){
    vector<Show> system;
    loadshows(system);
    int option;
    while (true)
    {

        option = choice();
        
        if(option==1){
            addshow(system);
        }
        else if(option==2){
            viewshows(system);
        }
        else if(option==3){
            searchshows(system);
        }
        else if(option==4){
            BookTicket(system);
        }
        else if(option==5){
            CancelTicket(system);
        }
        else if(option==6){
            ViewBookedTickets(system);
        }
        else if(option==7){
            Deleteshow(system);
        }
        else {
            break;
        }
    }
    cout<<"Thank you for using Ticket Booking System.\n";
    
    return 0;
}
