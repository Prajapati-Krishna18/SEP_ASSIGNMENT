// 20. Continuous Alphabet Triangle
#include <stdio.h>
int main(){
    int a=0;
    for(int row=0;row<=6;row++){
        for(int col=1;col<=row;col++){
            printf("%c ",'A'+a);
            a = a +1;
        }
        printf("\n");
    }
    return 0;
}