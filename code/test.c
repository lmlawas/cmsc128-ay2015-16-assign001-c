#include<stdio.h>
#include<string.h>
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
  int choice, num, jmp;
  char del;
  char str[100];
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
        printf("\nEnter a 6-digit number in words:\n");
        scanf("%s", str);
        wordsToNum(str);
        printf("\n\n");
        break;
      case 3: //words to currency
        break;
      case 4: // number delimited
        printf("\nEnter a 6-digit number:\n");
        scanf("%d", &num);
        getchar();
        printf("\nEnter a character:\n");
        scanf("%c", &del);
        getchar();
        printf("\nEnter number of jumps:\n");
        scanf("%d", &jmp);
        numberDelimited(num, del, jmp);
        break;
      case 0: // exit
        printf("\nExit.\n\n");
        break;
      default: printf("Invalid choice. Try again.\n");
    }
  }while(choice!=0);

  return 0;
}
