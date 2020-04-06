/*
Quarantine Coding, April 2020
Program to implemente Quick Sort in C using last element as pivot
*/
#include "src/baseInput.h"

int div(int low, int high){
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
    piv = div(low, high);

    quick_sort(low, piv - 1);
    quick_sort(piv + 1, high);
  }
}

int main(int argc, char const *argv[]) {
  int num = init();
  quick_sort(0, 19);
  fin(num);
}
