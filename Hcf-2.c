#include<stdio.h>
int main()
{
    int m,n;
    int max , min;
    printf("Enter two Number :");
    scanf("%d%d",&m,&n);
    if(m>n){
      max = m;
      min = n;
    } 
    else{
        max = n;
        min = m;
    }
    int rem=0;
    while(1){
        rem = max%min;
        if(rem==0){
            printf("Hcf is %d ",min);
            break;
        }
        else{
            max = min;
            min = rem;
        }
    }
}