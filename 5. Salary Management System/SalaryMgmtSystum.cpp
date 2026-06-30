
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
void AddEmployee(vector<Employee>& a);
void viewEmployee(const vector<Employee>& a);
void SearchEmployee(const vector<Employee>& a);
void DeleteEmployee(vector<Employee>& a);
void UpdateSalary(vector<Employee>& a);

int takechoice(){
    cout<<"===== Salary Management System ====="<<endl<<endl<<"1. Add Employee"<<endl<<"2. View Employees"<<endl<<"3. Search Employee"<<endl<<"4. Update Salary"<<endl<<"5. Delete Employee"<<endl<<"6. Exit"<<endl<<endl;
    
    int choice;
    cout<<"Choose a Option From Menu : ";cin>>choice;
    cout<<endl<<endl;
    return choice;
}

void AddEmployee(vector<Employee>& a){
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
        // cin.ignore();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
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

void DeleteEmployee(vector<Employee>& a){
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

void UpdateSalary(vector<Employee>& a){
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
        cout<<"To Search a Employee---"<<endl<<"Enter Employee ID of Employee : ";
        int num;
        cin>>num;
        bool found = false;
        for (size_t i = 0; i < a.size(); i++)
        {
            if(num==a[i].employeeid){
                float salary;
                cout<<"Enter New Salary You Want to Update : ";cin>>salary;
                a[i].salary = salary;
                cout<<"Salary of "<<a[i].name<<" is Updated to "<<salary;
                found = true;
                break;
            }
        }
        if(!found) {
            cout<<"No Employee Found"<<endl;
        }
    }
}

int main(){
    cout<<"WELCOME TO SALARY MANAGEMENT SYSTEM\n";
    vector<Employee> Employeess;
    while(true){
        
        cout<<endl<<endl;
        int choice = takechoice();
        if(choice==6){
            cout<<"Exited Successfully";
            break;
        }
        else if(choice == 1){
            AddEmployee(Employeess);
        }
        else if(choice == 2){
            viewEmployee(Employeess);
        }
        else if(choice == 3){
            SearchEmployee(Employeess);
        }
        else if(choice == 4){
            UpdateSalary(Employeess);
        }
        else if(choice == 5){
            DeleteEmployee(Employeess);
        }
        else cout<<"Select Valid Option"<<endl;
    }
    
    return 0;
}