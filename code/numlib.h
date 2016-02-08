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

void numToWords(int num){
/******************************************************************************
  Accepts a whole number from zero (0) to 1 million (1000000; withou commas)
  and prints on screen the number in word form.
******************************************************************************/
  if(num>=1000000){
    printOnes(num/1000000);
    printf("million ");
    num = num-(num/1000000);
  }

}//end of numToWords()

void wordsToNum(){
/******************************************************************************
  Accepts a number in word form (from zero to 1 million)
  and returns it in numerical form. Input must be in lowercase.
******************************************************************************/
}

void wordsToCurrency(){
/******************************************************************************
  Accepts two arguments: the first argument is the number in word form (from
  zero to 1 million) and the second argument is any of the following:
  JPY, PHP, USD. The function returns the number in words to its numerical
  form with a prefix of the currency.
******************************************************************************/
}

void numberDelimited(){
/******************************************************************************
  Accepts three arguments: the first is the number from zero to 1 million,
  the second is the delimiter to be used (single character only) and the third,
  the number of jumps when the delimiter will appear (from right most
  going to left most digit)
******************************************************************************/
}
