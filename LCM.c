#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter Two Numbers For LCM : ");
    scanf("%d%d",&n1,&n2);

    if(n1 <= 0 || n2 <= 0){
        printf("LCM doesn't exist for 0 or negative numbers.");
        return 0;
    }

    int i=2;

    while(n1 > 1 || n2 > 1){
        if(n1 % i == 0 && n2 % i == 0){
            printf("%d ", i);
            n1 /= i;
            n2 /= i;
        }
        else if(n1 % i == 0){
            printf("%d ", i);
            n1 /= i;
        }
        else if(n2 % i == 0){
            printf("%d ", i);
            n2 /= i;
        }
        else i++;
    }

    return 0;
}
