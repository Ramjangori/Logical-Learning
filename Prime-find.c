#include<stdio.h>
int main(){
    int n , prime=1;
    printf("Enter positive N :");
    scanf("%d",&n);
    if(n==1) printf("Not Prime ");
    else{
        int i=2;
        while(i<=n/2){
            if(n%i==0){
                prime =0;
            }
            i++;
            
        }
    }
    if(prime) printf("Prime");
    else printf("Not Prime ");


    

}