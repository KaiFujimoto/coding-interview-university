/* 10-05-2020 Chapter 1 The C Programming Language Notes */
/* covers 1.5.4 */

/* 1.5.4 Word Counting */

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
// main()
// {
//   int c, n1, nw, nc, state;
//
//   state = OUT;
//   n1 = nw = nc = 0;
//   while ((c = getchar()) != EOF) {
//     ++nc;
//     if (c == '\n')
//       ++n1;
//     if (c == ' ' || c == '\n' || c == '\t')
//       state = OUT;
//     else if (state == OUT) {
//       state = IN;
//       ++nw;
//     }
//   }
//   printf("%d %d %d\n", n1, nw, nc);
// }

/*
1.5.4

variable state records whether the program is currently in a word or not

n1 = nw = nc = 0; => sets all three variables to zero

*/

/* Exercise 1-11 */
/* How would you test the word count program? What kinds of input are mostly likey to uncover bugs if there are any? */

/*
  - First try no input => should be 0 0 0
  - try one character word => should be 1 1 2
  - try 2 character word => should be 1 1 3
  - try 2 one character words => 1 2 4

  boundaries:
  - no input
  - no words-- just new lines
  - no words-- just blanks, tabs, and new lines
  - one word per line --no blanks and tabs
  - word starting at the beginning of the line
  - word starting after some blanks
*/

/* Exercise 1-12 */
/* Write a program that prints its input one word per line */

main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }
    } else if (state == OUT) {
      state = IN;
      putchar(c);
    } else {
      putchar(c);
    }
  }
}
