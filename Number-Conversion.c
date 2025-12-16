#include<stdio.h>
int main(){
	int n;
    
	 printf("--Number Conversion System--\n");
	 printf("Enter What Type Number you Will Enter..\n");
	 printf("Press 1->Binary\nPress 2->Decimal\nPress 3->Octal\nPress 4->Hexadecimal\n");
     scanf("%d",&n);

     if(n==1){
        int m;
        printf("What Type Number You Want to Get..\n");
        printf("Press 1->Decimal\nPress 2->Octal\npress 3->Hexadecimal\n");
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
          int bin , decimal=0 , pos=1;
           printf("Enter Binary Number :");
           scanf("%d",&bin);
           while(bin>0){
           decimal = decimal + (bin%10)*pos;
             pos = pos*2;
             bin = bin/10;
             }
             
     int i=0;
     char Hexa[100];
     while(decimal>0){
         int rem = decimal%16;
         if(rem<10)  Hexa[i] = rem + 48;
         else Hexa[i] = rem + 55;
         i++;
         decimal = decimal/16;
     } 
      printf("Hexadecimal is : ");
       int j = i-1;
         while(j>=0){
            printf("%c",Hexa[j]);
            if(j==0) break;
            j--;
    }
        }
     }
	 else if(n==2){
        int m;
        printf("What type Number  You Want to Get..\n");
        printf("Press 1->Binary\nPress 2->Octal\nPress 3->Hexadecimal\n");
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
            int num;
           printf("Enter Number :");
           scanf("%d",&num);
           int octal=0;
          int up = 1;
    while(num>0){
        int rem = num%8;
        octal = octal + rem*up;
        up = up*10;
        num = num/8;

    }
    printf("Octal Number is %d :",octal);
        } 
        if(m==3){
            int Num;
     int i=0;
     char Hexa[100];
     printf("Enter Number : ");
     scanf("%d",&Num);
     while(Num>0){
         int rem = Num%16;
         if(rem<10)  Hexa[i] = rem + 48;
         else Hexa[i] = rem + 55;
         i++;
         Num = Num/16;
     }
     printf("Hexadecimal is : ");
    int j = i-1;
    while(j>=0){
        printf("%c",Hexa[j]);
        if(j==0) break;
        j--;
    }
        }
    }
     else if(n==3)	{
        int m;
        printf("Enter What type Number want to get ..\n");
        printf("Press 1->Binary\nPress 2->Decimal\nPress3->Hexadecimal\n");
        scanf("%d",&m);
        if(m==1){
            int num , decimal = 0 , up=1;
          printf("Enter Octal num :");
         scanf("%d",&num);
       while(num>0){
        int rem = num%10;
        decimal = decimal + rem*up;
        up = up*8;
        num = num/10;
    }
    int binary=0;
    int position=1;
    while(decimal>=1){
        binary = binary + (decimal%2)*position;
        position = position*10;
        decimal = decimal/2;
        
    }
 
    printf("Binary is %d :" , binary);
     }
        if(m==2){
             int num , decimal = 0 , up=1;
          printf("Enter Octal num :");
         scanf("%d",&num);
       while(num>0){
        int rem = num%10;
        decimal = decimal + rem*up;
        up = up*8;
        num = num/10;
    } 
     printf("Decimal is %d :",decimal);
        }
        if(m==3){
             int Octal , decimal = 0 , up=1;
          printf("Enter Octal num :");
         scanf("%d",&Octal);
       while(Octal>0){
        int rem = Octal%10;
        decimal = decimal + rem*up;
        up = up*8;
        Octal = Octal/10;
    } 
     // Now we convert Decimal to hexadecimal 
     int i=0;
     char Hexa[100];
     while(decimal>0){
         int rem = decimal%16;
         if(rem<10)  Hexa[i] = rem + 48;
         else Hexa[i] = rem + 55;
         i++;
         decimal = decimal/16;
     }
     printf("Hexadecimal is :");
    int j = i-1;
    while(j>=0){
        printf("%c",Hexa[j]);
        if(j==0) break;
        j--;
    }

        }

}
  return 0;
}