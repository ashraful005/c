#include<iostream>
using namespace std;
int main(){
    int t1, t2,i, nextTerm;
    long long int  sum = 0;
    long n;
    t1 = 1;
    t2 = 2;
    cin>>n;
    for (i = 1; i <n; i++) {
        //printf("%d, ", t1);
        nextTerm = t1 + t2;
        if(t1%2==0){
            sum = sum + t1;
        }
        t1 = t2;
        t2 = nextTerm;

    }
    cout<<"\n"<<sum;
    return 0;
}
