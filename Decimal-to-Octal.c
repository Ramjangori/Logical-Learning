#include<stdio.h>
int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
    int octal=0;
    int up = 1;
    while(n>0){
        int rem = n%8;
        octal = octal + rem*up;
        up = up*10;
        n = n/8;

    }
    printf("Octal Number is %d :",octal);

}