#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter Two Numbers :");
    scanf("%d%d",&n1,&n2);
    int min;
    if(n1<n2) min = n1;
    else min = n2;
    while(1){
        if(n1%min==0 && n2%min==0){
            printf("HCF IS %d",min);
            break;
        }
        min--;
    }
}