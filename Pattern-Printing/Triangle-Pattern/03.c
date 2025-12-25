#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int temp =n;
    for(int i=1 ; i<=n ; i++){
        
      for(int j=1 ; j<=i ; j++){
        printf("%d ",n);
      }
      n--;


        printf("\n");
    }
}
