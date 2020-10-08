/* 10-07-2020 Chapter 1 The C Programming Language Notes */
/* covers 1.6 */

/* 1.6 Arrays */

#include <stdio.h>

/* count digits, white space, others */
// main()
// {
//   int c, i, nwhite, nother;
//   int ndigit[10];
//
//   nwhite = nother = 0;
//   for (i = 0; i < 10; ++i)
//   {
//     ndigit[i] = 0;
//   }
//
//   while ((c = getchar()) != EOF)
//     if (c >= '0' && c <= '9')
//     {
//       ++ndigit[c-'0'];
//     }
//     else if (c == ' ' || c == '\n' || c == '\t')
//     {
//       ++nwhite;
//     }
//     else
//     {
//       ++nother;
//     }
//
//     printf("digits = ");
//     for (i = 0; i < 10; ++i)
//     {
//       printf(" %d", ndigit[i]);
//     }
//     printf(", white space = %d, other = %d\n", nwhite, nother);
// }


/* 1-13 */
/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXHIST 15 /* max length of histogram */
#define MAXWORD 11  /* max length of a word */

/* print horizontal histogram */
main()
{
  int c, i, nc, state;
  int len; /* length of each bar */
  int maxvalue; /* maximum value for w1[] */
  int ovflow; /* number of overflow words */
  int w1[MAXWORD]; /* word length counters */

  state = OUT;
  nc = 0; /* number of chars in a word */
  ovflow = 0; /* number of words >= MAXWORD */
  for (i = 0; i < MAXWORD; ++i) {
    w1[i] = 0;
  }
  while ((c = getchar ()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (nc > 0) {
        if (nc < MAXWORD) {
          ++w1[nc];
        } else {
          ++ovflow;
        }
      }
      nc = 0;
    } else if (state == OUT) {
      state = IN;
      nc = 1; /* beginning of a new word */
    } else {
      ++nc; /* inside a word */
    }
  }
  maxvalue = 0;
  for (i = 1; i < MAXWORD; ++i)
    if (w1[i] > maxvalue)
      maxvalue = w1[i];
  for (i = 1; i < MAXWORD; ++i) {
    printf("%5d - %5d: ", i, w1[i]);
    if (w1[i] > 0) {
      if ((len-w1[i] * MAXHIST / maxvalue) <= 0)
        len = 1;
    } else {
      len = 0;
    }
    while (len > 0) {
      putchar('*');
      --len;
    }
    putchar('\n');
  }
  if (ovflow > 0)
    printf("there are %d words >= %d\n", ovflow, MAXWORD);
}
