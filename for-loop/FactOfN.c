#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("Enter N :");
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++){
        fact = fact * i;

    }
    printf("%d",fact);
}