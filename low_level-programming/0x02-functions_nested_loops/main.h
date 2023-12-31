#ifndef MAIN_H
#define MAIN_H
/* The printf function by Julien Barbier ALX*/
int _putchar(char c);

/* prints the alphabet, in lowercase, followed by a new line */
void print_alphabet(void);

/* Prints 10 times the alphabet, in lowercase, followed by a new line. */
void print_alphabet_x10(void);

/* Checks for lowercase character */
int _islower(int c);

/* checks for alphabetic character */
int _isalpha(int c);

/* Prints the sign of a number */
int print_sign(int n);

/* function that computes the absolute value of an integer. */
int _abs(int);

/* function that prints the last digit of a number */
int print_last_digit(int);

/* prints every mins of the day of Jack Bauer,starting from 00:00 to 23:59 */
void jack_bauer(void);

/* prints the 9 times table, starting with 0 */
void times_table(void);

/* function that adds two integers and returns the result */
int add(int, int);

/* prints all natural numbers from n to 98 and new line */
void print_to_98(int n);

void print_times_table(int n);

#endif
