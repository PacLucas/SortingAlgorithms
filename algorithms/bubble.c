/*
Quarantine Coding, April 2020
Program to implemente Bubble Sort in C
*/
#include "src/baseInput.h"


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

int main(int argc, char const *argv[]) {
  int num = init();
  bubble_sort(num);
  fin(num);
}
