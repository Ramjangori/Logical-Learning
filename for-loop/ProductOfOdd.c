#include<stdio.h>
int main(){
    int n;
    int Odd = 1;
    printf("Enter N :");
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++){
        if(i%2!=0) Odd = Odd*i;

    }
    printf("%d",Odd);
}