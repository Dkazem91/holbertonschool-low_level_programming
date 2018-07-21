# 0x07. C - Recursion
Understanding Recursion and applying it in everyday assignments

## Exercises

0. She locked away a secret, deep inside herself, something she once knew to be
true... but chose to forget
Write a function that prints a string, followed by a new line.

1. Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.

2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.

3. You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.
Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1

4. Once an idea has taken hold of the brain it's almost impossible to eradicate 
Write a function that returns the value of x raised to the power of y.
Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1

5. Your subconscious is looking for the dreamer 
Write a function that returns the natural square root of a number.
Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1

6. Inception. Is it possible?
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything 
Write a function that returns 1 if a string is a palindrome and 0 if not.
An empty string is a palindrome

8. Inception. Now, before you bother telling me it's impossible...
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
Prototype: int wildcmp(char *s1, char *s2);
s2 can contain the special character *.
The special char * can replace any string (including an empty string)
