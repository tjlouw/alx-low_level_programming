---
premalink: /variable,-if,-else,-while/
title: Variables, if, else, while
---

### A description of what each script does

This should answer what the challenge of each script was in detail:

This C script data is the default data to be used in some of the scripts below. Only some areas could be changed.

```
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
```

 * **0-positive_or_negative.c** - In this program I had to use the above code and add some code that produced the out come of positive, negative or zero. Output needs to be in string format.
 * **1-last_digit.c** - Here I had to print the value of n, and extract the last digit therof using a loop that states whether the extracted value is >5, =0, OR <6=0. Output needs to be in string format. 
 * **2-print_alphabet.c** - Write a program that prints the alphabet in lowercase, followed by a new line. Only use putchar twice.
 * **3-print_alphabets.c** - Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line. Only use putchar three times.
 * **4-print_alphabt.c** - Write a program that prints the alphabet in lowercase, followed by a new line. Remove q and e from output. Only use purchat twice.
 * **5-print_numbers.c** - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * **6-print_numberz.c** - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line. Can't use char type variables. Only use putchar twice.
 * **7-print_tebahpla.c** - Write a program that prints the lowercase alphabet in reverse, followed by a new line. Only use putchar twice.
 * **8-print_base16.c** - Write a program that prints all the numbers of base 16 in lowercase, followed by a new line. Only use putchar three times.
 * **9-print_comb.c** - Write a program that prints all possible combinations of single-digit numbers. add a comma space(', ') after each value. Only use putchar four times. Cant use char variable type.
