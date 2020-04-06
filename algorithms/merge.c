/*
Quarantine Coding, April 2020
Program to implemente Merge Sort in C
*/
#include "src/baseInput.h"

int auxArr[100];

void copyArr(int num){
  for(int i = 0; i < num; i++)  arr[i] = auxArr[i];
}

void merge(int num){
  for(int i = 1; i < n; i *= 2){
    for(int j = 0; j < n; j = j + 2 * i){
      merge_sort(j, )
    }
  }
}

void merge_sort(int aLeft, int aRight, int aEnd){
  int i = aLeft, j = aRight;

  for(int k = aLeft; k < aEnd; k++){
    if(i  < aRight && (j >= aEnd || arr[i] <= arr[j])){
      auxArr[k] = arr[i];
      i = i + 1;
    } else{
      auxArr[k] = arr[j];
      j += 1;
    }
  }
}

int main(int argc, char const *argv[]) {
  int num = init();
  merge_sort(num);
  fin(num);
}
