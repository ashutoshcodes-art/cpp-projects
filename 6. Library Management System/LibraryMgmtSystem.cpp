
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

struct Book{
    string Title;
    int BookID;
    string Author;
    bool Status;
};

int takechoice();
void addbook(vector<Book>& a);
void viewbook(const vector<Book>&a);
void Searchbook(const vector<Book>&a);
void Issuebook(vector<Book>& a);
void Returnbook(vector<Book>& a);
void Deletebook(vector<Book>& a);
void bookinfo(const vector<Book>&a,int i);

int takechoice(){
    cout<<"===== Library Management System =====\n\n"<<"1. Add Book\n"<<"2. View Books\n"<<"3. Search Book\n"<<"4. Issue Book\n"<<"5. Return Book\n"<<"6. Delete Book\n"<<"7. Exit\n\n";
    int option;
    cout<<"Choose an Option From The Menu : ";cin>>option;
    while (!(option>=1 && option <=7))
    {
        cout<<"Choose Valid Option: ";cin>>option; 
    }
    return option;
}

void addbook(vector<Book>& a){
    Book b;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Book Title : ";getline(cin,b.Title);
    int id;
    bool exist = true;
    while(exist){
        cout<<"Enter Book ID : ";cin>>id;
        bool duplicate = false;
        for (size_t i = 0; i < a.size(); i++)
        {
            if(id==a[i].BookID){
                cout<<"Book ID already Exist\nEnter Unique Book ID : ";
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            exist = false;
        }
    }
    b.BookID = id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Author Name : ";getline(cin,b.Author);
    b.Status = true;
    a.push_back(b);
    cout<<"Book Added\n";
}

void viewbook(const vector<Book>&a){
    if(a.empty()){
        cout<<"\nNo Books Available\n";
    }
    else {
        cout<<"\nAvailable Books : \n";
        for (size_t i = 0; i < a.size(); i++)
        {
            cout<<"[Book "<<i+1<<" ]\n";
            bookinfo(a,i);
        }
    }
}

void bookinfo(const vector<Book>&a,int i){
    cout<<"Book Title : "<<a[i].Title<<endl;
    cout<<"Book ID : "<<a[i].BookID<<endl;
    cout<<"Author Name : "<<a[i].Author<<endl;
    if(a[i].Status==true){
        cout<<"Status : Available\n";
    }
    else {
        cout<<"Status : Issued\n";
    }
}

void Searchbook(const vector<Book>&a){
    if(a.empty()){
        cout<<"Please Add Books First";
    }
    else {
        int id;
        bool found = false;
        cout<<"Enter book ID to Search : ";cin>>id;
        for (size_t i = 0; i < a.size(); i++)
        {
            if(id==a[i].BookID){
                cout<<"Book Found\n";
                bookinfo(a,i);
                found = true;
                break;
            }
        }
        if (!found){
                cout<<"Book Not Found!\n";
            }
    }
}

void Issuebook(vector<Book>& a){
    if(a.empty()){
        cout<<"Please Add Books First";
    }
    else {
        int id;
        cout<<"\nBooks Available : ";
        for (size_t i = 0; i < a.size(); i++)
        {
            bookinfo(a,i);cout<<endl;
        }
        cout<<"Enter Book ID to Issue : ";cin>>id;
        bool issued = false,exist = false;

        for (size_t i = 0; i < a.size(); i++)
        {
            if(id==a[i].BookID){
                exist = true;
                
                if(a[i].Status == true){
                    cout<<a[i].Title<<" has been Issued\n";
                    a[i].Status=false;
                    issued = true;
                    break;
                }
            }
        }
        if(exist && !issued) {
                cout<<"Book is Already Issued\n";
            }
        else if(!exist){
            cout<<"Invalid Book ID\n";
        }
    }
}

void Returnbook(vector<Book>& a){
    int count = 0;
    cout<<"\nIssued Books List : \n";
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i].Status==false){
            cout<<"Book Title : "<<a[i].Title<<endl;
            cout<<"Book ID : "<<a[i].BookID<<endl<<endl;count++;
        }
    }
    if(!count){
        cout<<"No Book Available to Return\n";
    }
    else {
        int id;
        cout<<"Enter Book ID of book you want to return : ";cin>>id;
        bool returned = false,exist=false;
        for (size_t i = 0; i < a.size(); i++)
        {
            if(id==a[i].BookID){
                exist = true;
                
                if(a[i].Status==false){
                    a[i].Status=true;
                    cout<<a[i].Title<<" Book Has Marked Available\n";
                    returned = true;
                }
                break;
            }
        }
        if(exist && !returned) {
                cout<<"Book is Already Available\n";
            }
        else if(!exist){
            cout<<"Invalid Book ID\n";
        }
    }
}

void Deletebook(vector<Book>& a){
    int id;
        cout<<"Enter Book ID of book you want to Delete : ";cin>>id;
        bool found = false;
        for (size_t i = 0; i < a.size(); i++)
        {
            if(id==a[i].BookID){
                cout << a[i].Title << " Deleted Successfully\n";
                a.erase(a.begin() + i);
                found = true;
                break;
            }
        }
        if(!found) {
                cout<<"No Book Found to Delete\n";
        }

}

int main(){
    vector<Book> book;
    cout<<"WELCOME TO LIBRARY MANAGEMENT SYSTEM\n";

    while(true){
        int choice = takechoice();
        if(choice==7){
            cout<<"\nExited!!\n\n";
            return 0;
        }
        else if(choice == 1){
            addbook(book);
        }
        else if(choice == 2){
            viewbook(book);
        }
        else if(choice == 3){
            Searchbook(book);
        }
        else if(choice == 4){
            Issuebook(book);
        }
        else if(choice == 5){
            Returnbook(book);
        }
        else if(choice == 6){
            Deletebook(book);
        }
    }
    return 0;
}