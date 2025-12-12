#include<stdio.h>
int main(){
    int n , decimal = 0 , up=1;
    printf("Enter n :");
    scanf("%d",&n);
    while(n>0){
        int rem = n%10;
        decimal = decimal + rem*up;
        up = up*8;
        n = n/10;
    }
    printf("decimal is %d :",decimal);
}