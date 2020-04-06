#include <stdio.h>
#include <stdlib.h>
#include "ranGen/mt19937ar.h"
#include "baseInput.h"


void asciiArt(){
  system("clear");
  printf(R"EOF(
  ____             _   _                  _    _                  _ _   _                   
 / ___|  ___  _ __| |_(_)_ __   __ _     / \  | | __ _  ___  _ __(_) |_| |__  _ __ ___  ___ 
 \___ \ / _ \| '__| __| | '_ \ / _` |   / _ \ | |/ _` |/ _ \| '__| | __| '_ \| '_ ` _ \/ __|
  ___) | (_) | |  | |_| | | | | (_| |  / ___ \| | (_| | (_) | |  | | |_| | | | | | | | \__ \
 |____/ \___/|_|   \__|_|_| |_|\__, | /_/   \_\_|\__, |\___/|_|  |_|\__|_| |_|_| |_| |_|___/
                               |___/             |___/                                      
                              
                     by Lucas 'Astronaut' Pacheco - Quarantine 2020
  )EOF");
}
// Initial func to input data
int init(){
  int FLAG = 0, num;
  FILE *link;

  int input;
  asciiArt();
  printf("\nChoose input format:\n1 - input.txt\n2 - Mersenne Twister (pseudorandom number generator)\n0 - Exit\n");
  scanf("%d", &input);

  switch (input){
    case 1: 
      asciiArt();
      if((link = fopen("src/input.txt","r+")) == NULL){ // Check if the file is empty
        printf("Erro na abertura do arquivo de entrada!\n");
        exit(1);
      }
      fscanf(link, "%d", &num);
      for(int i = 0; i < num; i++)  fscanf(link, "%d", &arr[i]);

      break;
    
    case 2 :
      asciiArt();
      printf("\nNumbers to generate: ");
      scanf("%d", &num);
      for(int i = 0; i < num; i++)  arr[i] = (unsigned int)genrand_int32();
      break;

    case 0 :
      asciiArt();
      exit(1);
  }

  return num;
}

//Final func to show array sorted
void fin(int num){
  printf("\n  Final Array = [ ");

  for(int i = 0; i < num; i++){
    printf("%d ", arr[i]);
  }
  printf("]\n\n");
  //printf("Iterations: %d\n", count);
}
