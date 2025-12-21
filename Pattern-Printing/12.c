#include<stdio.h>
int main(){
    int n;
    printf("Enter N :"); // NUmber of Rows and Columns in pattern
    scanf("%d",&n);
    int p =2;
    for(int i=n ; i>=1 ; i--){
         
        for(int j=n ; j>=1 ; j--){
            printf("%2d ",p);
            p+=2;
           
        }
        printf("\n");
    }
}