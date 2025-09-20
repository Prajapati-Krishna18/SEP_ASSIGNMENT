// 23. Right-Aligned Inverted Triangle (Alphabets)
#include <stdio.h>
int main(){
    int n=4;
    for(int row=n;row>=0;row--){
        for(int i=1;i<=n-row;i++){
            printf(" ");
        }
        for(int col=0;col<=row;col++){
            printf("%c",'A'+col);
        }
        printf("\n");
    }
    return 0;
}