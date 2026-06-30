#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randnumGenerator();
void takeguess(int n);
void game();
char askuseragain();


int randnumGenerator(){
    
    int secretNum= rand() % 100 + 1; //Random number from 1 to 100
    
    return secretNum;
}

void takeguess(int n){
    bool guessed = false; //I can simply use while(true) & break on Guessing correct
    int count =1;
    while(!guessed){
        int guess;
        cout<<"Guess Number : ";cin>>guess;
        if(guess==n){
            cout<<"Correct!"<<endl<<"You Guessed it in "<<count<<" attempts"<<endl;
            guessed = true;
        }
        else if(guess<n){
            cout<<"Little Higher!"<<endl;
        }
        else if(guess>n){
            cout<<"Little Lower!"<<endl;
        }
        count++;
    }
}

void game(){
    int n = randnumGenerator();
    cout<<"I've Thought the Number between 1 to 100 "<<endl;
    takeguess(n);
}

char askuseragain(){
    char Ans;
    cout<<"You want to Play again[Y/N] : ";cin>>Ans;
    Ans = tolower(Ans);
    if(Ans=='y'){
    }
    else if(Ans=='n'){
        cout<<endl<<endl<<"Game Ended!";
    }
    else {
        cout<<"Enter in [Y/N] Format"<<endl;
        return askuseragain();
    }
    return Ans;
}

int main(){
    srand(time(0)); //Seed Random number generator
    game();
    char PlayAgain = askuseragain();
    while(PlayAgain=='y'){
        game();
        PlayAgain = askuseragain();
    }
    return 0;
}