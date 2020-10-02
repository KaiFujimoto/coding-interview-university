#include <stdio.h>
/* 09-29-2020 Chapter 1 The C Programming Language Notes */
/* covers 1.3-1.5.1 */

/* Secion 1.3 The For Statement */
/* print Fahrenheit-Celsius table */

// main()
// {
//   int fahr;
//
//   for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//     printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
// }

/*
1.3

for statment is a loop
first part is initialization -> fahr = 0
second part is the test condition that controls loop -> fahr <= 300
third part is the increment step -> fahr += 20
*/

/* ----------------------SECION DIVIDER--------------------------- */

/* Secion 1.4 Symbolic Constants */

//
// #define LOWER 0 /* lower limit of table */
// #define UPPER 300 /* upper limit */
// #define STEP 20 /* step size */

/* print Fahrenheit-Celsius table */

// main()
// {
//   int fahr;
//
//   for( fahr = 0; fahr <= 300; fahr += 20)
//     printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
// }

/*
1.4

LOWER, UPPER, STEP are symbolic constants not variables so they do not appear in declarations
Naming convesion is to make them upper case
There is no semicolon after the #define line

#define name replacement text

- define line defines a symbolic name or symbolic constant to be a particular string of characters

- any occurence of *name* will be replaced by the corresponding replacement text.
*/

/* ----------------------SECION DIVIDER--------------------------- */

/* 1.5 Character Input and Output */

/*
  standard library provides several functions for reading or writing one character at a time
  getchar
  putchar

  getchar - reads next input character from a text stream and returns that as its value
    c = getchar()
  putchar - prints a character each time it is called
    putchar(c)
*/

/* 1.5.1 File Copying */

/*copy input to output; 1st version */
// main()
// {
//   int c;
//   c = getchar();
//   while (c != EOF) {
//     putchar(c);
//     c = getchar();
//   }
// }


/*
1.5.1

characters are stored in a bit patern
type char is specifically for character data but int can be used as well

getchar - returns a dstinctive value when there is no more input EOF (end of file)

EOF is an integer defined in studio.h

copying would just be c = getchar()

*/

/* copy input to output; 2nd version */
// main()
// {
//   int c;
//
//   while((c = getchar()) != EOF)
//     putchar(c);
// }


/*
1.5.1 (cont)

while gets a character and assigns it to c, test if c is EOF signal, if not, then print char

*/

/* Exercise 1-6 */

/* Verify that the expression getchar() != EOF is 0 or 1 */

main()
{
  int c;

  c = getchar();
  printf("%3d %6.1f\n", c != EOF);
}
