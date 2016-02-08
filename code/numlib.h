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
  else printf("Error. Number too big.");

}//end of numToWords()

void wordsToNum(){
/******************************************************************************
  Accepts a number in word form (from zero to 1 million)
  and returns it in numerical form. Input must be in lowercase.
******************************************************************************/
}//end of wordsToNum()

void wordsToCurrency(){
/******************************************************************************
  Accepts two arguments: the first argument is the number in word form (from
  zero to 1 million) and the second argument is any of the following:
  JPY, PHP, USD. The function returns the number in words to its numerical
  form with a prefix of the currency.
******************************************************************************/
}//end of wordsToCurrency()

void numberDelimited(){
/******************************************************************************
  Accepts three arguments: the first is the number from zero to 1 million,
  the second is the delimiter to be used (single character only) and the third,
  the number of jumps when the delimiter will appear (from right most
  going to left most digit)
******************************************************************************/
}//end of numberDelimited()
