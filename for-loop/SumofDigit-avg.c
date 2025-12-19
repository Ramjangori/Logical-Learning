#include<stdio.h>
int main(){
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
    int sumOfDigit = 0;
    float avg = 0;
    int count = 0;
    for( ; n>0 ; n/=10) {
        count++;
        sumOfDigit = sumOfDigit + n%10;
        
        
     }
     avg = sumOfDigit/count;
       printf("%d\n",sumOfDigit);
       printf("%f",avg);

}