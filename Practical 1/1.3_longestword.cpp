#include<iostream>
#include<string>
using namespace std;

int main(){
   
    string statement;
    cout<<"Enter statement: ";
    getline(cin, statement);

    string current= "";
    string longest= "";

    for(int i=0;i<=statement.length();i++){
        
        if(statement[i]== ' ' || statement[i]== '\0'){
           
            if(current.length()>longest.length()){
                longest = current;
                current = "";
            }
        }
        else
        {
            current+= statement[i];
        }
    }

    cout<<"\nLongest Word: "<<longest;
    cout<<"\nLetters: "<<longest.length();

    return 0;
}