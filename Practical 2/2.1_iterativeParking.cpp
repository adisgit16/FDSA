#include<iostream>
using namespace std;

int linearSearch(string plates[],int n,string target){
    for(int i=0;i<n;i++){
        if(plates[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    string target;
    cout << "Enter number of vehicles: ";
    cin >> n;

    string plates[n];

    cout<<"Enter license plates:\n";
    for(int i=0;i<n;i++){
        cin>>plates[i];
    }

    cout<<"Enter license plate to search: ";
    cin>>target;

    int result= linearSearch(plates,n,target);

    if(result!=-1)
        cout<<"Vehicle found at position "<<result+1;
    else
        cout<<"Vehicle not found";

    return 0;
}