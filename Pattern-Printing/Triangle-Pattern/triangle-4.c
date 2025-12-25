#include <stdio.h>

int main()
{   int n;
    printf("Enter N : ");
    scanf("%d",&n);
    
    // Pattern-1
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i; j++){
            printf("* ");
        }
        
        
        
        printf("\n");
    }
   
   
     printf("\n");
     
     
     
     //Pattern-2
     for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=i; j++){
            printf("* ");
        }
        
        
        
        printf("\n");
    }
    
     printf("\n");
    
    
    
     //Pattern-3
     for(int i=1 ; i<=n ; i++){
        for(int j=1; j<=n; j++){
            if((i+j)>=n+1){
            printf("* ");
                
            }
            else{
                printf("  ");
            }
            
        }
        
        
        
        printf("\n");
    }
    
    
    printf("\n");
    
    
    
    
    // Pattern-4
 for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n; j++){
            if(i>j){
                printf("  ");
            }
            else{
                printf("* ");
            }
            
        }
        
        
        
        printf("\n");
    }


    return 0;
}