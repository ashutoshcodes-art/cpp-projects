
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

struct Employee{
    string name;
    int employeeid;
    string department;
    float salary;
};

int takechoice();
void addstu(vector<Employee>& a);
void viewEmployee(const vector<Employee>& a);
void SearchEmployee(const vector<Employee>& a);
void DeleteStu(vector<Employee>& a);

int takechoice(){
    cout<<"===== Employee Record Management ====="<<endl<<endl<<"1. Add Employee"<<endl<<"2. View Employees"<<endl<<"3. Search Employee"<<endl<<"4. Delete Employee"<<endl<<"5. Exit"<<endl<<endl;
    
    int choice;
    cout<<"Choose a Option From Menu : ";cin>>choice;
    cout<<endl<<endl;
    return choice;
}

void addstu(vector<Employee>& a){
    Employee s;
    cout<<"Provide Details of the Employee --"<<endl;
    // cin.ignore();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter Name of Employee : ";getline(cin,s.name);
    cout<<"Enter Employee ID of Employee : ";cin>>s.employeeid;
    bool found = false;
    for (size_t i = 0; i < a.size(); i++)
    {
        if(s.employeeid==a[i].employeeid){
            cout<<"Employee ID already Exists!!\n";
            found = true;
            break;
        }
    }
    if(!found){
    cin.ignore();
    cout<<"Enter Department of Employee : ";getline(cin,s.department);
    cout<<"Enter salary of Employee : ";cin>>s.salary;
    a.push_back(s);
    cout<<"Employee Added Successfully"<<endl<<endl;
    }
}

void viewEmployee(const vector<Employee>& a){
    if(a.empty()){
        cout<<"No Employees are Available"<<endl;
    }
    else {
        for (size_t i = 0; i < a.size(); i++)
        {
            cout<<"\n[Employee "<<i+1<<"] : "<<endl;
            cout<<"Name of Employee : "<<a[i].name<<endl;
            cout<<"Employee ID of Employee : "<<a[i].employeeid<<endl;
            cout<<"Department of Employee : "<<a[i].department<<endl;
            cout<<"salary of Employee : "<<a[i].salary<<endl;
        }
    }
}

void SearchEmployee(const vector<Employee>& a){
    int num;
    cout<<"To Search a Employee---"<<endl<<"Enter Employee ID of Employee : ";
    cin>>num;
    bool found = false;
    for (size_t i = 0; i < a.size(); i++)
    {
        if(num==a[i].employeeid){
            cout<<"Employee Found!!"<<endl;
            cout<<"Employee "<<i+1<<" : "<<endl;
            cout<<"Name of Employee : "<<a[i].name<<endl;
            cout<<"Employee ID of Employee : "<<a[i].employeeid<<endl;
            cout<<"Department of Employee : "<<a[i].department<<endl;
            cout<<"salary of Employee : "<<a[i].salary<<endl;
            found = true;
            break;
        }
    }
    if(!found) {
            cout<<"No Employee Found"<<endl;
        }
}

void DeleteStu(vector<Employee>& a){
    if(a.empty()){
        cout<<"No Employees are Available"<<endl;
    }
    else {
        cout<<"Here are the list of Employees Available"<<endl;
        for (size_t i = 0; i < a.size(); i++)
        {
            cout<<"[Employee "<<i+1<<"] : "<<endl;
            cout<<"Name of Employee : "<<a[i].name<<endl;
        }
        int sno;
        cout<<"Enter Serial Number of Employee you want to Delete : ";cin>>sno;
        if(sno>=1 && sno<=a.size()){
            string name = a[sno-1].name;
            a.erase(a.begin()+(sno-1));
            cout<<"Employee Record of "<<name<<" is Deleted!!\n";
        }
        else cout<<"Enter Valid Serial Number\n";
    }
    
}

int main(){
    cout<<"WELCOME TO Employee MANAGEMENT SYSTEM\n";
    vector<Employee> stu;
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
            viewEmployee(stu);
        }
        else if(choice == 3){
            SearchEmployee(stu);
        }
        else if(choice == 4){
            DeleteStu(stu);
        }
        else cout<<"Select Valid Option"<<endl;
    }
    
    return 0;
}