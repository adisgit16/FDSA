#include<iostream>
#include<string>
using namespace std;

int linearSearchRecursive(string plates[], int n, string target, int index){
    if(index==n){
        return -1;
    }
    if(plates[index]==target){
        return index;
    }
    return linearSearchRecursive(plates, n, target, index + 1);
}

int main(){
    int n;
    string target;
    cout<<"Enter number of vehicles: ";
    cin>>n;

    string plates[n];

    cout<<"Enter license plates:\n";
    for(int i=0;i<n;i++){
        cin>>plates[i];
    }

    cout<<"Enter license plate to search: ";
    cin>>target;

    int result= linearSearchRecursive(plates, n, target, 0);

    if(result!= -1)
        cout<<"Vehicle found at position " << result + 1;
    else
        cout<<"Vehicle not found";

    return 0;
}