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
            
        }
     }
	 	
}