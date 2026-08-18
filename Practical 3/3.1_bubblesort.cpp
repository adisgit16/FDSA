#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int arr[100];

    cout<<"Enter the marks: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]= arr[j + 1];
                arr[j + 1]= temp;
            }
        }
    }

    cout<<"Marks after Bubble Sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}