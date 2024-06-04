#include <iostream>
#include <cstdio>

void TowersOfHanoi(int n,char from='A',char to='B',char aux='C'){
    //if last disk, then move it to destination
    if(n==1){
        printf("Move disk 1 from %c to %c\n",from,to);
        return;
    }

    //move the top n-1 disks to 'aux' with 'dest' as auxillary
    TowersOfHanoi(n-1,from,aux,to);

    //move the last disk to the destination 
    printf("Move disk %d from %c to %c\n",n,from,to);

    //move the n-1 disks from 'aux' to 'dest' with 'from' as auxillary
    TowersOfHanoi(n-1,aux,to,from);
}
int main(){
    int n;
    std::cout<<"Enter the number of disks:";
    std::cin>>n;
    TowersOfHanoi(n);
}
