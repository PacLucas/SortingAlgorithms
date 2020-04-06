/*
Quarantine Coding, April 2020
Program to implemente Merge Sort in C
*/
#include "src/baseInput.h"

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

int main(int argc, char const *argv[]) {
  int num = init();
  merge_Sort(0, num - 1);
  fin(num);
}
