/*
===============================
      MENU CALCULATOR
===============================

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Factorial
9. Percentage
10. Exit
*/

#include <iostream>
#include <cmath>
#include <limits>
#include <vector>
using namespace std;

int takeint();
int choose();
void addition();
float takefloat();
void inputvector(vector<float>& a,int n);
float sumfunction(const vector<float>&a);
void subtraction();
void multiplication();
void division();
void modulusfunction();
void power();
void squareroot();
void factorialfunction();
long long factorial(int n);
void percentage();

int takeint(){
    int num;
    while(true){
        cin>>num;
        if(cin.fail() || num<=0){
            cout<<"Enter Integer greater than zero Only : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }
    return num;
}

float takefloat(){
    float num;
    while(true){
        cin>>num;
        if(cin.fail() || num<=0){
            cout<<"Enter Number Greater than 0 Only : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }
    return num;
}

int choose(){
    int choice;
    cout<<"===============================\n      MENU CALCULATOR\n===============================\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Power\n7. Square Root\n8. Factorial\n9. Percentage\n10. Exit\n\nChoose An Option : ";
    choice = takeint();
    while(true){
        choice = takeint();
        if(choice>=1 && choice<=10){
            return choice;
        }
        cout<<"Choose Valid Option : ";
    }
}

void inputvector(vector<float>& a,int n){
    for (int i = 0; i < n; i++)
    {
        float num;
        cout<<"Enter Digit "<<i+1<<" : ";
        num = takefloat();
        a.push_back(num);
    }
}

float sumfunction(const vector<float>&a){
    float sum=0;
    for (size_t i = 0; i < a.size(); i++)
    {
        sum+=a[i];
    }
    return sum;
}

void addition(){
    int n;
    vector<float> digits;
    cout<<"How many digits you wanna sum : ";n = takeint();
    inputvector(digits,n);
    
    cout<<"RESULT : "<<sumfunction(digits)<<endl;
}

void subtraction(){
    float n1,n2;
    cout<<"Enter First Number : ";n1 = takefloat();
    cout<<"Enter Second Number : ";n2 = takefloat();

    cout<<"RESULT : "<<n1-n2<<endl;
}

void multiplication(){
    float n1,n2;
    cout<<"Enter First Number : ";n1 = takefloat();
    cout<<"Enter Second Number : ";n2 = takefloat();

    cout<<"RESULT : "<<n1*n2<<endl;
}

void division(){
    float n1,n2;
    cout<<"Enter First Number : ";n1 = takefloat();
    cout<<"Enter Second Number : ";n2 = takefloat();

    cout<<"RESULT : "<<n1/n2<<endl;
}

void modulusfunction(){
    int n1 , n2;
    cout<<"Enter First Number : ";n1 = takeint();
    cout<<"Enter Second Number : ";n2 = takeint();

    cout<<"RESULT : "<<n1%n2<<endl;
}

void power(){
    float num;int power;
    cout<<"Enter Number : ";num = takefloat();
    cout<<"Enter Power : ";power = takeint();

    cout<<"RESULT : "<<pow(num,power)<<endl;
}

void squareroot(){
    float num;
    cout<<"Enter Number : ";num = takefloat();
    cout<<"RESULT : "<<sqrt(num)<<endl;
}

long long factorial(int n){
    if(n<=0 || n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

void factorialfunction(){
    int num;
    cout<<"Enter Number : ";num = takeint();

    cout<<"RESULT : "<<factorial(num)<<endl;
}

void percentage(){
    int n;
    vector<float> digits;
    cout<<"How many digits you wanna cal percentage : ";n = takeint();
    inputvector(digits,n);
    float sum = sumfunction(digits);
    cout<<"RESULT : "<<(sum/n)*100<<"%\n";
}

int main(){
    int choice;
    while (true){
        choice = choose();
        if(choice==1){
            addition();
        }
        else if(choice==2){
            subtraction();
        }
        else if(choice==3){
            multiplication();
        }
        else if(choice==4){
            division();
        }
        else if(choice==5){
            modulusfunction();
        }
        else if(choice==6){
            power();
        }
        else if(choice==7){
            squareroot();
        }
        else if(choice==8){
            factorialfunction();
        }
        else if(choice==9){
            percentage();
        }
        else break;
    }
    cout<<"Thanks For Using Our Calculator!";
    return 0;
}