#include <stdio.h>

int main() {
    int a,b,i;
    printf("Enter two integers a and b(1≤a≤b≤10): ");
    scanf("%d %d",&a,&b);
    if(1<=a && a<=b && b<=10){
for(i=1;i<10;i++){
    a=a*3;
    b=b*2;
    if(a>b){
        break;
    }
}
}
else{
    printf("Invalid input");
}
printf("%d",i);
    return 0;
}