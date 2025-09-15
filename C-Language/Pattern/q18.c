// 18. Inverted Right-Angled Triangle (Alphabets) 
#include <stdio.h>
int main(){
    for(int row=4;row>=0;row--){
        for(int col=0;col<=row;col++){
            printf("%c ",'A'+col);
        }
        printf("\n");
    }
    return 0;
}