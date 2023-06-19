#include <stdlib.h>
  2 #include <stdio.h>
  3 #include <time.h>
  4 /**
  5 * main - Prints the last digit of a randomly generated number and whether is greater than 5,less than 6, or 0.
  6 *
  7 * Return: Always 0 (success)
  8 */
  9 int main(void) /*Function for integer*/
 10 {
 11         int n;
 12 
 13         srand(time(0));
 14         n = rand() - RAND_MAX / 2;
 15         if ((n % 10) > 5)
 16         {
 17                 printf("Last digit of %d is %d and is greater than 5\n, n, n % 10);
 18         }
 19         else if ((n % 10) < 6 && (n % 10) != 0)
 20         {
 21                 printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
 22         }
 23         else
 24         {
 25                 printf("Last digit of %d is %d and is 0\n", n, n % 10);
 26         }
 27         return (0);
 28 }
