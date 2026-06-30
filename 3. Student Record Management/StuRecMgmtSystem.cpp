
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

struct Student{
    string name;
    int rollno;
    float cgpa;
};

int takechoice();
void addstu(vector<Student>& a);
void viewstudent(const vector<Student>& a);
void SearchStudent(const vector<Student>& a);
void DeleteStu(vector<Student>& a);

int takechoice(){
    cout<<"===== Student Record Management ====="<<endl<<endl<<"1. Add Student"<<endl<<"2. View Students"<<endl<<"3. Search Student"<<endl<<"4. Delete Student"<<endl<<"5. Exit"<<endl<<endl;
    
    int choice;
    cout<<"Choose a Option From Menu : ";cin>>choice;
    cout<<endl<<endl;
    return choice;
}

void addstu(vector<Student>& a){
    Student s;
    cout<<"Provide Details of the student --"<<endl;
    // cin.ignore();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Name of Student : ";getline(cin,s.name);
    cout<<"Enter Roll No. of Student : ";cin>>s.rollno;
    cout<<"Enter CGPA of Student : ";cin>>s.cgpa;
    a.push_back(s);
    cout<<"Student Added Successfully"<<endl<<endl;
}

void viewstudent(const vector<Student>& a){
    if(a.empty()){
        cout<<"No Students are Available"<<endl;
    }
    else {
        for (size_t i = 0; i < a.size(); i++)
        {
            cout<<"\n[Student "<<i+1<<"] : "<<endl;
            cout<<"Name of Student : "<<a[i].name<<endl;
            cout<<"Roll No. of Student : "<<a[i].rollno<<endl;
            cout<<"CGPA of Student : "<<a[i].cgpa<<endl;
        }
    }
}

void SearchStudent(const vector<Student>& a){
    int num;
    cout<<"To Search a Student---"<<endl<<"Enter Roll No of Student : ";
    cin>>num;
    bool found = false;
    for (size_t i = 0; i < a.size(); i++)
    {
        if(num==a[i].rollno){
            cout<<"Student Found!!"<<endl;
            cout<<"Student "<<i+1<<" : "<<endl;
            cout<<"Name of Student : "<<a[i].name<<endl;
            cout<<"Roll No. of Student : "<<a[i].rollno<<endl;
            cout<<"CGPA of Student : "<<a[i].cgpa<<endl;
            found = true;
            break;
        }
    }
    if(!found) {
            cout<<"No Student Found"<<endl;
        }
}

void DeleteStu(vector<Student>& a){
    if(a.empty()){
        cout<<"No Students are Available"<<endl;
    }
    else {
        cout<<"Here are the list of Students Available"<<endl;
        for (size_t i = 0; i < a.size(); i++)
        {
            cout<<"[Student "<<i+1<<"] : "<<endl;
            cout<<"Name of Student : "<<a[i].name<<endl;
        }
        int sno;
        cout<<"Enter Serial Number of Student you want to Delete : ";cin>>sno;
        if(sno>=1 && sno<=a.size()){
            string name = a[sno-1].name;
            a.erase(a.begin()+(sno-1));
            cout<<"Student Record of "<<name<<" is Deleted!!\n";
        }
        else cout<<"Enter Valid Serial Number\n";
    }
    
}

int main(){
    cout<<"WELCOME TO STUDENT MANAGEMENT SYSTEM\n";
    vector<Student> stu;
    while(true){
        
        cout<<endl<<endl;
        int choice = takechoice();
        if(choice==5){
            cout<<"Exited Successfully";
            break;
        }
        else if(choice == 1){
            addstu(stu);
        }
        else if(choice == 2){
            viewstudent(stu);
        }
        else if(choice == 3){
            SearchStudent(stu);
        }
        else if(choice == 4){
            DeleteStu(stu);
        }
        else cout<<"Select Valid Option"<<endl;
    }
    
    return 0;
}