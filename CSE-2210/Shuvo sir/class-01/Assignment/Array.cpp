#include<iostream>

using namespace std;

int arr[100];
int length;
int i, f;


void traverse( ){
cout<<"The array elements are: {";
for(i = 0; i <=length-1; i++){
    cout<<arr[i];
    if(i == length-1){
    cout<<"}"<<endl;
    }
    else{
    cout<<", ";
    }
}

}

void _insert( ){
    int item, pos;
    cout<<"Enter the index of the new item: ";
    cin>>pos;
    if(pos<0 || pos> length){
        cout<<"Invalid index"<<endl;
        return;
    }
    cout<<"Enter the new item: ";
    cin>>item;
    for(i = length-1; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = item;
    length++;

}


void _delete( ){
int index;
cout<<"Enter the index of the item to be deleted:";
cin>>index;
if(index<0 || index>length){
    cout<<"Invalid index"<<endl;
    return;
}
for(i = index; i<length; i++){
    arr[i] = arr[i+1];
}
length--;
}


int main( ){

cout<<"Enter the size of the array: ";
cin>>length;
cout<<"Enter array elements: ";
for(i = 0; i<length; i++){
    cin>>arr[i];
}
while(1){
    cout<<endl<<"Press 1 to traverse the array"<<endl;
    cout<<"Press 2 to insert an element to the array"<<endl;
    cout<<"Press 3 to delete an element from the array"<<endl;
    cout<<"Press 0 to exit from the program"<<endl<<endl;

    cin>>f;

    if(f == 1){
        traverse( );
    }
    else if(f == 2){
        _insert( );
    }
    else if(f == 3){
        _delete( );
    }
    else if(f == 0){
        break;
    }
    else{
        cout<<"Invalid case"<<endl;
    }

}


return 0;
}
