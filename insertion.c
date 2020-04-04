/*
Quarantine Coding, April 2020
Program to implemente Insertion Sort in C
*/
#include "src/baseInput.h"

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

int main(int argc, char const *argv[]) {
  int num = init();
  insertion_sort(num);
  fin(num);
}
