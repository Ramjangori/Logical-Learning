#include<stdio.h>
int main(){
    int n;
    printf("Enter N :"); // NUmber of Rows and Columns in pattern
    scanf("%d",&n);
   
    for(int i=n ; i>=1 ; i--){
         int temp = 2;
        for(int j=n ; j>=1 ; j--){
            printf("%d ",temp);
            temp+=2;
        }
        printf("\n");
    }
}