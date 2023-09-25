#include<iostream>
using namespace std;

int main(){
int a[] = {2, 5, 6, 8, 10, 13};
int x = 11;
int length = sizeof(a) / sizeof(a[0]);
int i;

for(i = 0; i<length; i++){
    if(a[i] == x){
        cout<<"Element is found at index: "<<i<<endl;
        break;
    }
    if(i == length - 1){
        cout<<"Element is not found"<<endl;
    }
}

return 0;
}
