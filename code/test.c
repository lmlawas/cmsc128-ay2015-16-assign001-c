#include<stdio.h>
#include "numlib.h"

void mainMenu(int *choice){
  printf("=======================\n");
  printf("====== MAIN MENU ======\n");
  printf("=======================\n");
  printf("[1] number to words\n");
  printf("[2] words to numbers\n");
  printf("[3] words to currency\n");
  printf("[4] number delimited\n");
  printf("[0] exit\n");
  printf("=======================\n");
  printf("Choice:\t");
  scanf("%d", choice);
}//end of mainMenu()

int main(){
  int choice, num;
  do{
    mainMenu(&choice);
    switch(choice){
      case 1: // numbers to words
        printf("\nEnter a 6-digit number:\n");
        scanf("%d", &num);
        numToWords(num);
        printf("\n\n");
        break;
      case 2: // words to numbers
        break;
      case 3: //words to currency
        break;
      case 4: // number delimited
        break;
      case 0: // exit
        printf("\nExit.\n\n");
        break;
      default: printf("Invalid choice. Try again.\n");
    }
  }while(choice!=0);

  return 0;
}
