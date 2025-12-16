#include<stdio.h>
int main(){
	int n;
    int conversion;
	 printf("--Number Conversion System--\n");
	 printf("Enter What Type Number you Will Enter..\n");
	 printf("Press 1->Binary\n Press 2->Decimal\n Press 3->Octal\n Press 4->Hexadecimal\n");
     scanf("%d",&n);

     if(n==1){
        int m;
        printf("What Type Number You Want to Get..\n");
        printf("Press 1->Decimal\n Press 2->Octal\n press 3->Hexadecimal\n");
        scanf("%d",&m);
        if(m==1){

            int num , decimal=0 , pos=1;
       printf("Enter N :");
       scanf("%d",&num);
    while(num>0){
        decimal = decimal + (num%10)*pos;
        pos = pos*2;
        num = num/10;
    }
    printf("decimal  is %d",decimal);
    

        }     
        if(m==2){
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
        }
        if(m==3){

        }
     }
	 else if(n==2){
        int m;
        printf("Press 1->Binary\n Press 2->Octal\n Press 3-> Hexadecimal\n");
        scanf("%d",&m);
        if(m==1){
            int num,binary=0;
            int position=1;
           printf("Enter number :");
           scanf("%d",&num);
    while(num>=1){
        binary = binary + (num%2)*position;
        position = position*10;
        num = num/2;
        
    }
 
    printf("Binary is %d :" , binary);
        }
        if(m==2){
            
        } 
    
    }	
}