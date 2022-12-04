#include <stdio.h>

int main(void)
{
//   int n;
//   long int sum = 0;

//   scanf("%d", &n);
//   while (n != 0) {
//     sum += n;
//     scanf("%d", &n);
//   }
//   printf("%d", sum);




//   int len = 0;
//   printf("Enter a message:");
//   while(getchar() != '\n')
//     len++;
// printf("Your message was %d character(s) long.", len);



  // int hour, min;
  // char time[2];
  // printf("Enter a 12-hour time (hours:minutes AM/PM): ");
  // scanf("%d:%d %s", &hour, &min, &time);

  
  // printf("%s", time);
  // time[0] = "P";
  // printf("%s", time);
  // printf("%s", time[0]);
  // if(time[0] == "A" || time[0] == "a"){
  //   printf("%d:%d", hour, min);
  // }






// -----------------------------------------------------------------------------------------------------
  // char ch;
  // printf("Enter phone number:\n");
  // while(1){
  //   switch(ch = getchar()){
  //     case '-': case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
  //       printf("%c", ch);
  //       break;
  //     case 'A':case 'B':case 'C':
  //       printf("2");
  //       break;
  //     case 'D':case 'E':case 'F':
  //       printf("3");
  //       break;
  //     case 'G':case 'H':case 'I':
  //       printf("4");
  //       break;
  //     case 'J':case 'K':case 'L':
  //       printf("5");
  //       break;
  //     case 'M':case 'N':case 'O':
  //       printf("6");
  //       break;
  //     case 'P':case 'R':case 'S':
  //       printf("7");
  //       break;
  //     case 'T':case 'U':case 'V':
  //       printf("8");
  //       break;
  //     case 'W':case 'X':case 'Y':
  //       printf("9");
  //       break;
  //     case '\n':
  //       return 0;
  //   }
  // }


  // char ch;
  // int value = 0;
  // printf("Enter a word: ");
  
  // while(1){
  //   //1: AEILNORSTU, 2: DG, 3:BCMP, 4: FHVWY, 5:K, 8:JX, 10:QZ
  //   switch(ch = getchar()){
  //     case 'a':case 'e':case 'i':case 'l':case 'n':case 'o':case 'r':case 's':case 't':case 'u':case 'A':case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
  //       value++;
  //       break;
  //     case 'd':case 'g':case 'D':case 'G':
  //       value += 2;
  //       break;
  //     case 'b':case 'c':case 'm':case 'p':
  //     case 'B':case 'C':case 'M':case 'P':
  //       value += 3;
  //       break;
  //     case 'f':case 'h':case 'v':case 'w':case 'y':
  //     case 'F':case 'H':case 'V':case 'W':case 'Y':
  //       value += 4;
  //       break;
  //     case 'k':
  //     case 'K':
  //       value += 5;
  //       break;
  //     case 'j':case 'x':
  //     case 'J':case 'X':
  //       value += 8;
  //       break;
  //     case 'q':case 'z':
  //     case 'Q':case 'Z':
  //       value += 10;
  //       break;
  //     case '\n':
  //       printf("Scrabble value: %d", value);
  //       return 0;
  //   }
  // }



  // int hour, min;
  // char ch;
  // printf("Enter a 12-hour time (hours:minutes AM/PM):\n");
  // scanf("%d:%d", &hour, &min);
  // printf("Equivalent 24-hour time: ");
  
  // if(hour != 12){
  //   while(1){
  //     switch(ch = getchar()){
  //       case 'a':case 'A':
  //         printf("%0.2d:%0.2d", hour, min);
  //         return 0;
  //       case 'p':case 'P':
  //         printf("%0.2d:%0.2d", hour+12, min);
  //         return 0;
  //       case ' ':
  //         break;
  //       default:
  //         printf("Error");
  //     }
  //   }
  // }else{
  //   while(1){
  //     switch(ch = getchar()){
  //       case 'a':case 'A':
  //         printf("00:%0.2d", min);
  //         return 0;
  //       case 'p':case 'P':
  //         printf("%0.2d:%0.2d", hour, min);
  //         return 0;
  //       case ' ':
  //         break;
  //       default:
  //         printf("Error");
  //     }
  //   }
  // }



  // int number = 0;

  // printf("Enter a sentence: \n");
  // while(1){
  //   switch(getchar()){
  //     case 'a':case 'e':case 'i':case 'o':case 'u':
  //     case 'A':case 'E':case 'I':case 'O':case 'U':
  //       number++;
  //       break;
  //     case '\n':
  //       printf("Your sentence contains %d vowels.", number);
  //       return 0;
  //   }
  // }



  // char firstName[10], lastName[10];
  // printf("Enter a first and last name: \n");
  // scanf("%s %s", firstName, lastName);
  // printf("%s, %c.", lastName, firstName[0]);  




  // char ch;
  // float characters = 0, words = 1;
  // float average;
  // printf("Enter a sentence: ");
  // while (1){
  //   ch = getchar();
  //   if (ch == ' '){
  //     words++;
  //   }else if(ch =='\n'){
  //     average = characters / words;
  //     printf("Characters: %.0f\n", characters);
  //     printf("Words: %.0f\n", words);
  //     printf("Average word length: %.1f", average);
  //     break;
  //   }else{
  //     characters++;
  //   }
  // }

  // float a, b, c, answer = 0;
  // char op1, op2;

  // printf("Enter an expression (example: 1+2.5*3):\n");

  // scanf("%f%c%f%c%f",&a, &op1, &b, &op2, &c);
  
  // switch(op1){
  //   case '+':
  //     switch(op2){
  //       case '+':
  //         answer = (a + b) + c;
  //         break;
  //       case '-':
  //         answer = (a + b) - c;
  //         break;
  //       case '*':
  //         answer = (a + b) * c;
  //         break;
  //       case '/':
  //         answer = (a + b) / c;
  //         break;
  //     }
  //     break;
  //   case '-':
  //     switch(op2){
  //       case '+':
  //         answer = (a - b) + c;
  //         break;
  //       case '-':
  //         answer = (a - b) - c;
  //         break;
  //       case '*':
  //         answer = (a - b) * c;
  //         break;
  //       case '/':
  //         answer = (a - b) / c;
  //         break;
  //     }
  //     break;
  //   case '*':
  //     switch(op2){
  //       case '+':
  //         answer = (a * b) + c;
  //         break;
  //       case '-':
  //         answer = (a * b) - c;
  //         break;
  //       case '*':
  //         answer = (a * b) * c;
  //         break;
  //       case '/':
  //         answer = (a * b) / c;
  //         break;
  //     }
  //     break;
  //   case '/':
  //     switch(op2){
  //       case '+':
  //         answer = (a / b) + c;
  //         break;
  //       case '-':
  //         answer = (a / b) - c;
  //         break;
  //       case '*':
  //         answer = (a / b) * c;
  //         break;
  //       case '/':
  //         answer = (a / b) / c;
  //         break;
  //     }
  //     break;
  // }
  // printf("Value of expression: %.1f", answer);




  double x, y = 1, average;
  printf("Enter a positive number: ");
  scanf("%f", &x);
  while(1){
    average = (y + x / y) / 2;
    if(y == average)
      break;
    y = average;
  }
  printf("Square root: %.5e", y);

  return 0;
}
