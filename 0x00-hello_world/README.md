## 0x00. C - Hello, World

Introduction to programming and first set of assignments at Holberton School

**What you should learn from this project**

    At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official Holberton C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

### Exercises

[0-preprocessor](./0-preprocessor)
```
Write a script that runs a C file through the preprocessor
and save the result into another file.
```
* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

[1-compiler](./1-compiler)
```
Write a script that compiles a C file but does not link.
```
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension
  .o instead of .c.

[2-assembler](./2-assembler)
```
Write a script that generates the assembly code of a C code and save it in
an output file.
```
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the
  extension .s instead of .c.

[4-puts.c](./4-puts.c)
```
Write a C program that prints exactly
"Programming is like building a multilingual puzzle, followed by a new line.
```
* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0

[3-name](./3-name)
```
Write a script that compiles a C file and creates an executable named cisfun.
```
* The C file name will be saved in the variable $CFILE

[5-printf.c](./5-printf.c)
```
Write a C program that prints exactly with proper grammar, but the outcome is
a piece of art,, followed by a new line.
```
* Use the function printf
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option

[6-size.c](./6-size.c)
```
Write a C program that prints the size of various types on the computer it is
compiled and run on.
```
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your Linux (Vagrant)
  to test the -m32 gcc option

[100-intel](./100-intel)
```
Write a script that generates the assembly code (Intel syntax) of a C code and
save it in an output file.
```
* The C file name will be saved in the variable $CFILE.
* The output file should be named the same as the C file, but with the extension
  .s instead of .c.

[101-quote.c](./101-quote.c)
```
Write a C program that prints exactly and that piece of art is useful"
- Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
```
* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
* Your program should return 1
* Your program should compile without any warnings when using the -Wall gcc option



*Full Stack Software Engineer*
