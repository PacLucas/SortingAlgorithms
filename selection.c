/*
Quarantine Coding, April 2020
Program to implemente Selection Sort in C
*/
#include <stdio.h>
#include "baseInput.h"

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

int main(int argc, char const *argv[]) {
  int num = init();
  selection_sort(num);
  fin(num);
}
