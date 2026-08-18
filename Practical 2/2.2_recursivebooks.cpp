#include <iostream>
#include <string>
using namespace std;

int binarySearchRecursive(string arr[], int low, int high, string target){
    if(low>high){
        return -1;
    }

    int mid= (low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(target<arr[mid]){
        return binarySearchRecursive(arr, low, mid - 1, target);
    }
    return binarySearchRecursive(arr, mid + 1, high, target);
}

int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;

    string arr[100];
    cout<<"Enter sorted book codes: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    string target;
    cout<<"Enter book code to search: ";
    cin>>target;

    int position= binarySearchRecursive(arr, 0, n - 1, target);

    if(position!= -1)
        cout<<"Book found at position " << position;
    else
        cout<<"Book not found";

    return 0;
}