#include <stdio.h>

int main()
{    
   int N,Octal=0;
   int OctalPlace=1;
    printf("Enter Binary Number : ");
    scanf("%d",&N);
    while(N>0){
        
        int pos=1;
        int pair ;
        
        int OctalPair=0;
        pair = N%1000;
        N = N/1000;
        while(pair>0){
            
            OctalPair = OctalPair + (pair%10)*pos;
            pos = pos*2;
            pair = pair/10;
            
        }
        Octal = Octal + OctalPair*OctalPlace;
        OctalPlace= OctalPlace*10;
        
    }
    printf("Octal is : %d",Octal);
    return 0;
   
}
