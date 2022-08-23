#include<stdio.h>
#include<stdlib.h>
int main(){
    int input, col, row;
    for(row = 1; row<=5;++row){
        for(col=1;col<=5;++col){
            scanf("%d",&input);
            if(!(input ^ 1))
            {
                printf("%d", abs(row-3) + abs(col-3));
                return 0;
            }
        }
    }
}
