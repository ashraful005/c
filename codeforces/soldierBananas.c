// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int k,n,w,sum=0,i;
    scanf("%d %d %d",&k,&n,&w);
for(i=1;i<=w;i++){
    
    sum=sum+i;
}
int d=(sum*k)-n;
if(d<0){
    printf("0");
}
else{
  printf("%d",d);  
}
    return 0;
}