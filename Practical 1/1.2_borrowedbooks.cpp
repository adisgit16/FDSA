#include<iostream> 
using namespace std;

int main(){
    int n;
    cout<<"Enter number of borrowing records: ";
    cin>>n;

    int books[100];
    int frequency[1001]= {0};

    cout<<"Enter IDs: ";
    for(int i=0;i<n;i++){
        cin>>books[i];
        frequency[books[i]]++;
    }

    cout<<"Books borrowed more than once: ";
    for(int i=1;i<=1000;i++){
        if(frequency[i]>1){
            cout<<i<<" ";
        }
    }

    return 0;
}