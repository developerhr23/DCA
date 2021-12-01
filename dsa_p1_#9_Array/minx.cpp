#include <iostream>

using namespace std;

void max(int arr[], int n){
    int largest= INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest= arr[i];
        }
    }
    cout<<"Largest no. in the array: "<<largest<<endl;
}

void min(int arr[], int n){
    int smallest= INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest= arr[i];
        }
    }
    cout<<"Smallest no. in the array: "<<smallest<<endl;
}

int main(){

    int size=5, ar[size]={0, 9, 6, -23, 8};

    max(ar, size);
    
    min(ar, size);


}