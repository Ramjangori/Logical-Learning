#include<stdio.h>
int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
    int first = 0 , second = 1;
    int third;
    for(int i = 1 ; i<=n ; i++){
        printf("%d ",first);
        third = first + second;
        first = second;
        second = third;

}
}