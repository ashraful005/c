#include<stdio.h>
#include<math.h>
int main(){
 double a, b, c, res, R1, R2;
 printf("Enter 3 floating point numbers: ");
 scanf("%lf %lf %lf", &a, &b, &c);
 res = pow(b, 2) - (4*a*c);
 if(res<0 || a==0){
    printf("Impossivel calcular");
 }
 else{
    R1 = (-b + sqrt(res)) / (2*a);
    R2 = (-b - sqrt(res)) / (2*a);
    printf("R1 = %0.5lf\nR2 = %0.5lf", R1, R2);
 }
 return 0;
}
