#include <stdio.h>

int main()
{
    int m;
    printf("Enter m : ");
    scanf("%d",&m);
    int num;
    printf("Enter Num : ");
    scanf("%d",&num);
    
        
        while(m<=num){
            int prime=1;
            int i=2;
            while(i<=m/2){
                if(m%i==0)  prime=0;
                i++;
            }
            if(prime) printf("%d " , m);
            m++;
            prime=1;
            
        }
        
    

    return 0;
}
