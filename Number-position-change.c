#include<stdio.h>
int main()
{   int n;
    printf("Enter N :");// digit not 0 && digit not Exced than total digit in that NUmber 
    scanf("%d",&n);

    int number = 1;
    int result = 0;
    while(n>0){
        int rem = n%10;
        int p=1;
        
        while(rem>1){
            p = p*10;
            rem--;
        }
        result = result + number*p;
        n = n/10;
        number++;
    }
    printf("New Number is : %d ",result);
    return 0;
}