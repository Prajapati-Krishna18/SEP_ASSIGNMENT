// 22. Right-Aligned Inverted Triangle (Numbers)
#include <stdio.h>
int main(){
    int n=5;
    for(int row=n;row>=1;row--){
        for(int i=1;i<=n-row;i++){
            printf(" ");
        }
        for(int col=1;col<=row;col++){
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}