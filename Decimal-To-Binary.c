#include<stdio.h>
int main(){
    int n,binary=0;
    int position=1;
    printf("Enter n :");
    scanf("%d",&n);
    while(n>=1){
        binary = binary + (n%2)*position;
        position = position*10;
        n = n/2;
        
    }
 
    printf("Binary is %d :" , binary);
    return 0;
}
