#include<stdio.h>
int main() {
    int n , decimal=0 , pos=1;
    printf("Enter N :");
    scanf("%d",&n);
    while(n>0){
        decimal = decimal + (n%10)*pos;
        pos = pos*2;
        n = n/10;
    }
    printf("decimal is %d",decimal);
    

}