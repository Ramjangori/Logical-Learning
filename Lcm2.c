#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter two Numbers :");
    scanf("%d%d",&n1,&n2);
    int big;
    if(n1>n2) big=n1;
    else big=n2;
    while(1){
        if(big%n1==0 && big%n2==0){
            printf("LCM IS %d ",big);
            break;
        }
        big++;
    }
}
