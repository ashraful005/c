#include<stdio.h>

int main(){
    int i=1, j=60;
    for(j=j; j>=0; j = j-5){
        printf("I=%d J=%d\n", i, j);
        i = i+3;

    }

    return 0;
}
