/* 10-07-2020 Chapter 1 The C Programming Language Notes */
/* covers 1.7 */

/* 1.7 Functions */

#include <stdio.h>

// int power(int m, int n); // declaration
//
// /* test power function */
// main()
// {
//   int i;
//
//   for (i = 0; i < 10; ++i)
//     printf("%d %d %d\n", i, power(2, i), power(-3, i));
//   return 0; // implies normal termination
// }
//
// /* power: raise base to n-th power; n >= 0 */
// int power(int base, int n)
// {
//   int i, p;
//
//   p = 1;
//   for (i = 1; i <= n; ++i)
//     p = p*base;
//   return p;
// }

/* Exercise 1-15 */
/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion */

int temp(float temp, int type);

main()
{
  int i;

  i = 0.0;
  printf("Integer   Celsius   Fahrenheit\n");
  while (i < 300) {
    printf("%5d %10d %10d\n", i, temp(i, 'F'), temp(i, 'C'));
    i = i + 50;
  }
  return 0;
}

int temp(float temp, int type)
{
  int answer;

  if (type == 'F') {
    answer = (5.0/9.0) * (temp-32.0);
  } else {
    answer = (temp * (9.0/5.0) + 32);
  }
  return answer;
}
