#include <stdio.h>

//Bubble Sort

void bubbleSort(int A[], int l){
    for(int i = 0 ; i < l - 1 ; i++){
        int flag = 0;
        for(int j = 0 ; j < l-1-i ; j++){
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
            continue;
        }
    }
}

//Insertion Sort

void insertionSort(int A[], int l){
    int temp, j;
    for(int i = 1 ; i < l ; i++){
        temp = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > temp){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}

//Selection Sort

void selectionSort(int A[], int l){
    int min, swap;
    for(int i = 0 ; i < l-1 ; i++){
        min = i;
        for(int j = i+1 ; j < l ; j++){
            if(A[j] < A[min]){
                min = j;
            }
        }
        if(min != i){
            swap = A[i];
            A[i] = A[min];
            A[min] = swap;
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main(){
    int len;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &len);
    for(int i = 0 ; i < len ; i++){
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    // selectionSort(arr, len);
    // bubbleSort(arr, len);
    insertionSort(arr, len);
    printArray(arr, len);
    
}