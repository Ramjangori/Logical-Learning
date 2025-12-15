#include<stdio.h>
int main(){
    int n , k;
    printf("Enter N :");
    scanf("%d",&n);
    int nn = n;
    printf("Enter k :");
    scanf("%d",&k);
    if(n<10){
        printf("Enter N > 10 ...");
        }
    else {
    int count = 0;
    int p=1;
    while(n>0){
        n = n/10;
        count++;
        p = p*10;

    }
    p = p/10;
   while(k!=0){
   	//   Number rotate in anticlock-wise
   	if(k>0){
   		int rem = nn%10;
    nn = nn/10;
    nn = nn + rem*p;
    k--;
	   }
	   
	   // Number rotate in clock wise 
	   if(k<0){
	   	
	   	int rem = nn%p;
	   	int ls = nn/p;
	   	
	   	nn = rem*10 +ls;
	   	k++;
	   }
    
   }
   printf("%d",nn);
}
}
