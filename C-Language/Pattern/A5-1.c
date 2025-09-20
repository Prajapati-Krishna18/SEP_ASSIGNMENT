#include <stdio.h>
int main(){
// 1.Single Row Of Stars //
    for(int i=1;i<=5;i++){
        printf("*");
    }

// 2.Single Row of Numbers //
    for(int j=1;j<=5;j++){
        printf("%d ",j);
    }

// 3.Single Row of Alphabets //
    for(char k=65;k<=69;k++){
        printf("%c ",k);
    }

// 4. Square of Stars //
    for(int a=1;a<=4;a++){
        for(int b=1;b<=4;b++){
            printf("*",a);
        }
        printf("\n");
    }

// 5. Square of Numbers (row-wise) //
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("%d",j);
        }
        printf("\n");
    }

// 6. Square of Alphabets (row-wise) //
    for(int i=65;i<=68;i++){
        for(int j=65;j<=68;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

// 7. Right-angled Triangle — Stars (increasing) //
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

// 8.Right-angled Triangle — Numbers (increasing) //
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

// 9. Right-angled Triangle — Alphabets (increasing) //
    for(int i=65;i<=69;i++){
        for(int j=65;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

// 10. Right-Aligned Triangle — Stars //
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){   
            printf("*");
        }
        printf("\n");
    }

// 11. Right-Aligned Triangle — Numbers //
    int p=5;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=p-i;j++){
            printf(" ");
            if(i<=j){
                printf("%d",j);
            }
        }
        // for(int k=1;k<=i;k++){
        //     printf("%d",k);
        // }
        printf("\n");
    }
    
    //12 .Right-Aligned Triangle — Alphabets //
    int p=5;
    for(int i=0;i<=p;i++){
        for(int j=0;j<=p-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%c",'A'+k);
        }
        printf("\n");
    }

// 13. Full Pyramid — Stars (centered)
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ",k);
        }
        printf("\n");
    }

// 14.Full Pyramid — Numbers (centered)
    int row;
    printf("Enter the row :\n");
    scanf("%d",&row);
    
    for(int r=1;r<=row;r++){
            for(int j=1;j<=row-r;j++){
                printf(" ");
            }
            for(int k=1;k<=2*r-1 ;k++){
                printf("%d",k);
            }
        
        printf("\n");
    }

// 15. Full Pyramid — Alphabets (centered)
    int row = 5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    return 0;
}