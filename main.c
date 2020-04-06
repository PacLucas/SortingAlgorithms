#include <stdio.h>
#include <stdlib.h>
#include "src/baseInput.h"
#include "sortAlg.h"


int main(int argc, char const *argv[]){
  int num;
  int alg;
  int FLAG = 0;
  while(FLAG == 0){
    num = init();

    while(alg < 0 || alg > 5){
      asciiArt();

      printf("\nChoose an algorithm:\n1 - Bubble Sort\n2 - Insertion Sort\n3 - Merge Sort\n4 - Quick Sort\n5 - Selection Sort\n0 - Exit\n");
      scanf("%d", &alg);
    }

    printf("\n  Initial Array = [ ");
    for(int i = 0; i < num; i++)  printf("%d ", arr[i]);
    printf("]\n");

    switch (alg){
      case 1: 
        bubble_sort(num);
        break;
      
      case 2:
        insertion_sort(num);
        break;
      
      case 3:
        merge_Sort(0, num - 1);
        break;

      case 4:
        quick_sort(0, num - 1);
        break;

      case 5:
        selection_sort(num);
        break;
      case 0:
        asciiArt();
        exit(1);
    }

    fin(num);

    int aux;
    while(aux < 1 || aux > 2){
      printf("Try again?\n1 - Yes\n2 - No\n");
      scanf("%d", &aux);
    }

    if(aux == 2)  FLAG = 1;
    else{
      aux = 0;
      alg = 9;
    }
  }

  asciiArt();

}
