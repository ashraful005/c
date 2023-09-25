#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
  for(int i=0;i<n;i++){
    int flag=0;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
                 flag=1;
        }
    }
    if(flag==0){
        break;
    }
  }
}

int main(){
  int l;
  cin>>l;
  int a[l];
  for(int i=0;i<l;i++){
    cin>>a[i];
  }
  bubble_sort(a,l);
  for(int i=0;i<l;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
