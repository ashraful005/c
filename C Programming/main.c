#include<stdio.h>

int main(){
    int x, y, sum=0, i;
    printf("Enter 2 integers: ");
    scanf("%d %d", &x, &y);
    if(x<y){
        for(i=x; i<y; ++i){
            if(i%2 != 0){
                sum = sum +i;
            }
        }
    }
    else{
        for(i=y+1; i<x; ++i){
            if(i%2 != 0){
                sum = sum + i;
            }
        }
    }
    printf("%d", sum);
    return 0;
}
