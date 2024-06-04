#include <iostream>

using namespace std;

int checkSorted(int arr[],int n){
    if(n==1) return 1;
    if (arr[n-1]<arr[n-2]){
        return 0;
    }
    else{
        return checkSorted(arr,n-1);
    }
}

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(checkSorted(arr,n)) cout<<"Sorted\n";
    else cout<<"Not sorted\n";
    return 0;
}