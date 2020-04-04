/*
Quarantine Coding, April 2020
Program to implemente Sorting Algorithms in C
*/
#include <stdio.h>
#include <stdlib.h>
#include "baseInput.h"

// Initial func to input data
int init(){
  int FLAG = 0, num;
  FILE *link;

  if((link = fopen("src/input.txt","r+")) == NULL){ // Check if the file is empty
    printf("Erro na abertura do arquivo de entrada!\n");
    exit(1);
  }

  fscanf(link, "%d", &num);

  for(int i = 0; i < num; i++){
    fscanf(link, "%d", &arr[i]);
  }

  // int num;
  //
  //
  // printf("Number of elements: ");
  // scanf("%d", &num);
  // printf("\n");
  //
  // for(int i = 1; i <= num; i++){
  //   printf("Number %d: ", i);
  //   scanf("%d", &arr[i - 1]);
  // }
  //
  printf("~~~~~~~~~~~~Sorting Algorithm~~~~~~~~~~~~\n\n");
  printf("Initial Array = [ ");

  for(int i = 0; i < num; i++){
    printf("%d ", arr[i]);
  }
  printf("]\n");

  return num;
}

//Final func to show array sorted
void fin(int num){
  printf("\nFinal Array = [ ");

  for(int i = 0; i < num; i++){
    printf("%d ", arr[i]);
  }
  printf("]\n");
  //printf("Iterations: %d\n", count);
}

//Func to swap array values
void swap(int n, int m){
  int aux = arr[n];
  arr[n] = arr[m];
  arr[m] = aux;
}
