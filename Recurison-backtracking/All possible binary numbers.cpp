#include <iostream>
#include <cstring>

using namespace std;

void binary(string s,int n){
    if(n<1){
        cout<<s<<endl;
    }
    else{
        s[n-1] ='0';
        binary(s,n-1);
        s[n-1] = '1';
        binary(s,n-1);
    }
}

int main(){
    //binary("000",3);
    int n;
    cout<<"Enter number of bits:";
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        s+= '0';
    }
    binary(s,n);
}