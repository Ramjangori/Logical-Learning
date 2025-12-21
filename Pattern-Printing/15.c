#include<stdio.h>
int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        int c = 65;
        for(int j=1 ; j<=n ; j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
}