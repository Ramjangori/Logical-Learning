#include<stdio.h>
int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
    int prime = 1;
    for(int i = 2 ; i*i<=n ; i++){
       if(n%i==0) prime = 0;
    }
    if(prime==1) printf("%d is prime " , n);
    else printf("Not Prime");
}