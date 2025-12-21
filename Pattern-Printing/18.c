#include<stdio.h>

int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
     char  c = 'A' + (n*n-1)%26;
    for(int i=1; i<=n ; i++){
       
        for(int j=1 ; j<=n ; j++){
        
         printf("%c ",c);
         c--;
         if(c < 'A') c = 'Z';
         
        }
       
       
        printf("\n");
    }
}