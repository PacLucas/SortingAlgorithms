#include "src/baseInput.h"

//Func to swap array values
void swap(int n, int m){
  int aux = arr[n];
  arr[n] = arr[m];
  arr[m] = aux;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//Func to implement Bubble Sort
void bubble_sort(int num){
  for(int i = 0;  i < num - 1; i++){
    for(int j = 0; j < (num - i) - 1 ; j++){
      if(arr[j] > arr[j + 1]){
        //count++;
        swap(j, j + 1);
      }
    }
  }
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//Func to implement Insertion Sort
void insertion_sort(int num){
  int aux, x;
  for(int i = 1; i < num; i++){
    aux = arr[i];
    x = i - 1;

    while (x >= 0 && arr[x] > x){
      arr[x + 1] = arr[x];
      x -= 1;
    }
    arr[x + 1] = aux;
  }
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int divQuick(int low, int high){
  int piv = arr[high];
  int i = low - 1;

  for(int j = low; j <= high - 1; j ++){
    if(arr[j] < piv){
      i++;
      swap(i, j);
    }
  }
  swap(i + 1, high);

  return (i + 1);
}


void quick_sort(int low, int high){
  int piv;

  if(low < high){
    piv = divQuick(low, high);

    quick_sort(low, piv - 1);
    quick_sort(piv + 1, high);
  }
}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//Func to implemente Selection Sort
void selection_sort(int num){
  int minVal;

  for(int i = 0; i < num - 1; i++){
    minVal = i;
    for(int j = i + 1; j < num; j++){
      if(arr[j] < arr[minVal])  minVal = j;
    }
    swap(minVal, i);
  }
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

void merge(int left, int x, int right){
  int i, j, k; 
  int arr1 = x - left + 1; 
  int arr2 =  right - x; 
  
  int L[arr1], R[arr2]; 

    for (i = 0; i < arr1; i++) 
        L[i] = arr[left + i]; 
    for (j = 0; j < arr2; j++) 
        R[j] = arr[x + 1+ j]; 
  
    i = 0;
    j = 0;
    k = left;
    while (i < arr1 && j < arr2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < arr1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < arr2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void merge_Sort(int left, int right){ 
  if (left < right) { 
    int x = left + (right - left) / 2;

    merge_Sort(left, x); 
    merge_Sort(x + 1, right); 
  
    merge(left, x, right); 
  } 
} 
