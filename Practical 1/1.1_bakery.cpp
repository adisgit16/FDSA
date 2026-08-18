#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number of items: ";
    cin>>n;
    
    string sweets[100];
    cout<<"Name of items: ";
    for(int i=0;i<n;i++){
        cin>>sweets[i];
    }

    int h;
    cout<<"Enter number of hours: ";
    cin>>h;
    h=h%n;

    for(int i=h;i<n;i++){
        cout<<sweets[i]<<" ";
    }

    for(int i=0;i<h;i++){
        cout<<sweets[i]<<" ";
    }

    return 0;
}

