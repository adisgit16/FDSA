#include<iostream>
using namespace std;

void selectionColour(int c[], int n){
    for(int i=0;i<n-1;i++){
        int small= i;
        
        for(int j=i+1;j<n;j++){
            if(c[j]<c[small]){
                small= j;
            }
        }

        swap(c[i], c[small]);
    }

    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
}

int main(){
    int c[]= {1, 0, 1, 2, 1, 0, 2, 1};
    selectionColour(c, 8);

    return 0;
}