#include<stdio.h>
#include<math.h>

int root(x,y){
    float root;
    root = sqrt(pow(x,2)+pow(y,2));
    return root;
}
int main(){
int a,b;
//float root;
printf("Enter two integers in a line separating by spaces:");
scanf("%d %d", &a, &b);
//root = sqrt(pow(a,2)+pow(b,2));
float result;
result = root(a,b);
printf("%f", result);
}
