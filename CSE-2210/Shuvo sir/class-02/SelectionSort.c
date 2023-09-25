#include<stdio.h>


void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}

void SelectionSort(int arr[], int size){
for(int step = 0; step < size-1; step++){
    int iMin = step;
    for(int i = step+1; i<size; i++){
        if(arr[i]<arr[iMin]){
            iMin = i;
        }
        swap(&arr[iMin], &arr[step]);
    }
}
}

void printArray(int arr[], int size){
for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
}
printf("\n");
}

int main()
{
    int data[] = {2, 5, 3, 1, 7, 4};
    int size = sizeof(data)/sizeof(data[0]);
    SelectionSort(data, size);
    printf("Sorted array in Ascending order: ");
    printArray(data, size);
}
