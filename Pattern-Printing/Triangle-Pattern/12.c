#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
     int temp = 1;
    for(int i=n ; i>=1 ; i--){
       
     for(int j=1 ; j<=i ; j++){
        
        printf("%d ",temp);
        
        temp++;
     }
     



        printf("\n");
    }
}