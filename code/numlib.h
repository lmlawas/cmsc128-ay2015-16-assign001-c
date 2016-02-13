void printOnes(int n){
/******************************************************************************
  Accepts a number n<10 and prints out its word form.
******************************************************************************/
  if(n==1) printf("one ");
  else if(n==2) printf("two ");
  else if(n==3) printf("three ");
  else if(n==4) printf("four ");
  else if(n==5) printf("five ");
  else if(n==6) printf("six ");
  else if(n==7) printf("seven ");
  else if(n==8) printf("eight ");
  else if(n==9) printf("nine ");
}//end of printOnes()

void printTens(int n){
/******************************************************************************
  Accepts a number 10<=n<=20 and number n who are multiples of
  10 from 20 to 90; and prints out its word form.
******************************************************************************/
  if(n==10) printf("ten ");
  else if(n==11) printf("eleven ");
  else if(n==12) printf("twelve ");
  else if(n==13) printf("thirteen ");
  else if(n==14) printf("fourteen ");
  else if(n==15) printf("fifteen ");
  else if(n==16) printf("sixteen ");
  else if(n==17) printf("seventeen ");
  else if(n==18) printf("eighteen ");
  else if(n==19) printf("nineteen ");
  else if(n==2) printf("twenty");
  else if(n==3) printf("thirty");
  else if(n==4) printf("fourty");
  else if(n==5) printf("fifty");
  else if(n==6) printf("sixty");
  else if(n==7) printf("seventy");
  else if(n==8) printf("eighty");
  else if(n==9) printf("ninety");
}//end of printOnes()

void numToWords(int num){
/******************************************************************************
  Accepts a whole number from zero (0) to 1 million (1000000; withou commas)
  and prints on screen the number in word form.
******************************************************************************/
  if(!(num>=10000000)){
    // millions
    if(num>=1000000){
      printOnes(num/1000000); // ex. 9m/1m = 9, printOnes(9) = nine
      printf("million ");
      num = num%1000000;  // remove the millions place
    }
    // hundred thousands
    if(num>=100000){
      printOnes(num/100000);  // ex. 200k/100k = 2, printOnes(2) = two
      num = num%100000; // remove the hundred thousands place
      printf("hundred ");
      if(num<1000) printf("thousand "); // if no more thousands place number
    }
    // ten thousands
    if(num>=10000 && num<=19999){
      printTens(num/1000);  // ex. 13k/1k = 13, printTens(13) = thirteen
      num = num%1000; // remove the ten thousands place
      printf("thousand ");
    }else if(num>=20000){
      printTens(num/10000); // ex. 22k/10k = 2, printTens(2) = twenty
      num = num%10000; //remove the ten thousands place
      if(num>=1000){
        printf("-");
        printOnes(num/1000);  // ex. 2k/1k = 2, printOnes(2) = two
        num = num%1000; //remove the ten thousands place
      }else printf(" ");
      printf("thousand ");
    }
    // thousands
    if(num>=1000){
      printOnes(num/1000);  // ex. 2k/1k = 2, printOnes(2) = two
      num = num%1000; //remove the ten thousands place
      printf("thousand ");
    }
    // hundreds
    if(num>=100){
      printOnes(num/100); // ex. 452/100 = 4, printOnes(4) = four
      printf("hundred ");
      num = num%100;  // remove the hundreds place
    }
    // tens
    if(num>=10 && num<=19){
      printTens(num);
    }else if(num>=20){
      printTens(num/10);  // ex. 64/10 = 6, printTens(6) = sixty
      num = num%10; // remove the tens place
      if(num>=1){
        printf("-");
        printOnes(num);
        num = 0;
      }
    }
    // ones
    if(num>=1) printOnes(num);
  }
  else printf("\nError. Number too big.\n");

}//end of numToWords()

void removeBN(char x[]){
/******************************************************************************
	Accepts string x, removes the backslash n and replaces it
  with backslash zero.
******************************************************************************/
	int i;
	for(i = 0; i<strlen(x); i++){
		if(x[i]=='\n'){
			x[i] = '\0';
		}
	}
}//end of removeBN()

void compareOnes(char str[]){
/******************************************************************************
  Accepts string str and prints corresponding word-to-number form
  for the ones place digit.
******************************************************************************/
  if(strcmp(str, "one")==0) printf("1");
  else if(strcmp(str, "two")==0) printf("2");
  else if(strcmp(str, "three")==0) printf("3");
  else if(strcmp(str, "four")==0) printf("4");
  else if(strcmp(str, "five")==0) printf("5");
  else if(strcmp(str, "six")==0) printf("6");
  else if(strcmp(str, "seven")==0) printf("7");
  else if(strcmp(str, "eight")==0) printf("8");
  else if(strcmp(str, "nine")==0) printf("9");
}//end of compareOnes()

void compareTens(char str[]){
/******************************************************************************
  Accepts string str and prints corresponding word-to-number form
  for the tens place digit.
******************************************************************************/
  if(strcmp(str, "ten")==0) printf("10");
  else if(strcmp(str, "eleven")==0) printf("11");
  else if(strcmp(str, "twelve")==0) printf("12");
  else if(strcmp(str, "thirteen")==0) printf("13");
  else if(strcmp(str, "fourteen")==0) printf("14");
  else if(strcmp(str, "fifteen")==0) printf("15");
  else if(strcmp(str, "sixteen")==0) printf("16");
  else if(strcmp(str, "seventeen")==0) printf("17");
  else if(strcmp(str, "eighteen")==0) printf("18");
  else if(strcmp(str, "nineteen")==0) printf("19");
  else if(strcmp(str, "twenty")==0) printf("2");
  else if(strcmp(str, "thirty")==0) printf("3");
  else if(strcmp(str, "fourty")==0) printf("4");
  else if(strcmp(str, "fifty")==0) printf("5");
  else if(strcmp(str, "sixty")==0) printf("6");
  else if(strcmp(str, "seventy")==0) printf("7");
  else if(strcmp(str, "eighty")==0) printf("8");
  else if(strcmp(str, "ninety")==0) printf("9");
}//end of compareTens()

int countSpaces(char str[]){
/******************************************************************************
  Accepts a string str and returns the number of spaces in that string
******************************************************************************/
  int i, cnt=0;
  for(i=0;i<strlen(str);i++){
    if(str[i]==' ') cnt++;
  }
  return cnt;
}//end of countSpaces()

char* oneWord(char str[], char first[], int *spaces){
/******************************************************************************
  Accepts a string str and gets the word based on number of spaces,
  then returns address of
******************************************************************************/
  int i, j=0;

  for(i=0;i<strlen(str);i++){
    // if space or null character is encountered and spaces not zero
    if((str[i]==' ' || str[i]=='\0') && *spaces!=0){
      first[j] = '\0';  // null character to end strig first
      (*spaces)--;
      return &str[i+1];
    }
    // else part of first string
    else{
      first[j] = str[i];
      j++;
    }
  }
  return NULL;
}//end of oneWord()

void wordsToNum(char str[]){
/******************************************************************************
  Accepts a number in word form (from zero to 1 million)
  and returns it in numerical form. Input must be in lowercase.
******************************************************************************/
  int spaces, cnt=0;
  char current[20]="abc", remaining[100];
  char *p;

  removeBN(str);
  spaces = countSpaces(str);
  printf("spaces: %d\n", spaces);
  p = oneWord(str, current, &spaces);
  printf("s: %s", current);
  compareOnes(current);
  // compareTens(str);
}//end of wordsToNum()

void wordsToCurrency(){
/******************************************************************************
  Accepts two arguments: the first argument is the number in word form (from
  zero to 1 million) and the second argument is any of the following:
  JPY, PHP, USD. The function returns the number in words to its numerical
  form with a prefix of the currency.
******************************************************************************/
}//end of wordsToCurrency()

void numberDelimited(int num, char del, int jmp){
/******************************************************************************
  Accepts three arguments: the first is the number from zero to 1 million,
  the second is the delimiter to be used (single character only) and the third,
  the number of jumps when the delimiter will appear (from right most
  going to left most digit)
******************************************************************************/
  int arr[7];
  int i=0, j, diff, skip=0;
  char output[20];

  if(!(num>=10000000)){
    // millions place
    if(num>=1000000){
      arr[i] = num/1000000;
      num = num%1000000;
      i++;
    }
    // hundred thousands place
    if(num>=100000){
      arr[i] = num/100000;
      num = num%100000;
      i++;
    }
    // ten thousands place
    if(num>=10000){
      arr[i] = num/10000;
      num = num%10000;
      i++;
    }
    // thousands place
    if(num>=1000){
      arr[i] = num/1000;
      num = num%1000;
      i++;
    }
    // hundreds place
    if(num>=100){
      arr[i] = num/100;
      num = num%100;
      i++;
    }
    // tens place
    if(num>=10){
      arr[i] = num/10;
      num = num%10;
      i++;
    }
    // ones place
    if(num>=0){
      arr[i] = num;
    }

    // print with delimiter
    printf("\nResult:");
    for(j=0;j<=i;j++){
      skip = 0; // skip is "false"
      diff = i; // diff = max index
      while(diff>0){
        diff = diff-jmp;
        if(j-1==diff&&diff>=0){
          // print with delimiter if max index minus 1 equals diff
          printf("%c%d", del, arr[j]);
          // skip has been performed therefore skip is "true"
          skip = 1;
        }
      }
      if(skip==0){
        // if skip is false, arr[j] has not yet been printed therefore print it
        printf("%d", arr[j]);
      }
    }
    printf("\n");
  }
  else printf("\nError. Number too big.\n");

}//end of numberDelimited()
