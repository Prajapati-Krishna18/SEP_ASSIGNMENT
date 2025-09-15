// 19. Continuous Number Triangle
#include <stdio.h>
int main(){
    int a=1;
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            printf("%d ",a);
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}