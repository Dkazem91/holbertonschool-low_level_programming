# 0x09. C - argc, argv

At the end of this project you are expected to be able to explain to anyone,
without the help of Google:

How to use arguments passed to your program
What are two prototypes of main that you know of, and in which case do you use
one or the other
How to use __attribute__((unused)) or (void) to compile functions with unused
variables or parameters

## Exercises
0. It ain't what they call you, it's what you answer to mandatory
Write a program that prints its name, followed by a new line.
If you rename the program, it will print the new name, without
having to compile it again
You should not remove the path before the name of the program

1. Silence is argument carried out by other means
Write a program that prints the number of arguments passed into it.
Your program should print a number, followed by a new line

2. The best argument against democracy is a five-minute conversation with the
average voter
Write a program that prints all arguments it receives.
All arguments should be printed, including the first one
Only print one argument per line, ending with a new line

3. Neither irony or sarcasm is argument
Write a program that multiplies two numbers.
Your program should print the result of the multiplication, followed by a
new line
You can assume that the two numbers and result of the multiplication can
be stored in an integer
If the program does not receive two arguments, your program should print Error,
followed by a new line, and return 1

4. To infinity and beyond
Write a program that adds positive numbers.
Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line
If one of the number contains symbols that are not digits, print Error,
followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored
in an int