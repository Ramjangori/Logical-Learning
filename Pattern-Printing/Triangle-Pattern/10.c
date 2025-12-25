#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int temp=n*n+4;
    for(int i=1 ; i<=n ; i++){
     for(int j=1 ; j<=i ; j++){
        printf("%2d ",temp);
        temp-=2;
     }



        printf("\n");
    }
}