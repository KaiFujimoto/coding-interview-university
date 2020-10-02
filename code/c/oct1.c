#include <stdio.h>
/* 10-01-2020 Chapter 1 The C Programming Language Notes */
/* covers 1.5.2-1.5.4 */

/* 1.5.2 Character Counting */

// main()
// {
//   long nc;
//
//   nc = 0;
//   while (getchar() != EOF)
//     ++nc;
//   printf("%1d\n", nc);
// }

/*
1.5.2
  ++ means increment by 1
  -- decrement by 1
  long integers are 32 bits
  %1d tells printf that the corresponding argument is a long integer
*/

/* count characters in input; 2nd version */
// main()
// {
//     double nc;
//
//     for (nc = 0; getchar() != EOF; ++nc)
//       ;
//
//     printf("%.0f\n", nc);
// }

/*
1.5.2 (cont)
printf uses %f for both float and double; %.0f supresses printing of the decimal point and the fraction part, which is zero.

no body, but u still need to put the semi colon there for the body in the loop
*/

/* 1.5.3 Line Counting */

/* count lines in input */
// main()
// {
//   int c, n1;
//
//   n1 = 0;
//   while ((c = getchar()) != EOF)
//     if (c == '\n')
//       ++n1;
//   printf("%d\n", n1);
// }

/*
1.5.3
== means equal to
a character written between single quotes represents an integer value equal to the numerical value of the character in the machine's character set.

\n is a new line character and is a single character
*/

/* Exercises for 1.5.3 */

/* Exercise 1-8 */
/* Write a program to count blanks, tabs, and newlines */

// main()
// {
//   int c, newline, tabs, blanks;
//
//   newline = 0;
//   tabs = 0;
//   blanks = 0;
//
//   while ((c = getchar()) != EOF) { // these curlies were necessary
//     if (c == '\n')
//     ++newline;
//     if (c == '\t')
//     ++tabs;
//     if (c == ' ')
//     ++blanks;
//   }
//
//   printf("newline: %d tabs: %d blanks %d\n", newline, tabs, blanks);
//   // int char_count, num_lines, num_tabs, num_spaces;
// }

/* Exercise 1-9 */
/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank */

// main()
// {
//   int c, lastc;
//
//   while((c = getchar()) != EOF) {
//     if (c != ' ') {
//       putchar(c);
//     } else {
//       if (lastc != ' ') {
//         putchar(c);
//       }
//     }
//     lastc = c;
//   }
// }

/* Exercise 1-10 */
/* Write a program to copy its input to its ouput, replacing each tab by \t, each backspace by \b, and each backslash by \\. This make tabs and backspaces visible in an unambiguous way. */

// main()
// {
//   int c;
//
//   while ((c = getchar()) != EOF) {
//     if (c == '\t') {
//       printf("\\t");
//     }
//     if (c == '\b') {
//       printf("\\b");
//     }
//     if (c == '\\') {
//       printf("\\\\");
//     }
//     if (c != '\b') {
//       if (c != '\t') {
//         if (c != '\\') {
//           putchar(c);
//         }
//       }
//     }
//   }
// }
