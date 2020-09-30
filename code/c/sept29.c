/* 10-29-2020 Chapter 1 The C Programming Language Notes */
/* covers 1.1-1.2 */

#include <stdio.h> /* include information about standard library */

//
// main() /* define a function named main that receives no argument values */
// { /* statements are enclosed in braces */
//   printf("hello, world\n"); /* main calls library function printf to print this sequence of characters: \n represents the new line character */
//   printf("--------------------\n");
//   printf("hello, ");
//   printf("world");
//   printf(" \n");
// }

/* the first C program */

/*
1.1

"hello world" is a string or string constant
\n is C notation for the newline character
printf never supplies new line automatically

\t - tab
\b - backspace
\" - for double quote
\\ - for the backslash itself

*/

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
  /*
  int fahr, celsius;
  int lower, upper, step;
  */
  float fahr, celsius;
  int lower, upper, step;
  /* these are assignment statements */
  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */
  /*
  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
  */
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

/*
1.2

char - character-- a single byte
short - short integer
int - 16-bit ints between -32768 and 32767
float - 32-bit quanity with at least 6 significant digits and magnitude between 10 ^ -38 and 10 ^ 38
double - double-precision floating point

*/
