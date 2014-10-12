Reverse_and_Add
===============

A program that does as follows: chooses a number, reverses its digits and adds it to the original. If the sum is not a palindrome it repeats this procedure. 
~~~
195 (initial number) + 591 (reverse of initial number) = 786

786 + 687 = 1473

1473 + 3741 = 5214

5214 + 4125 = 9339 (palindrome)
~~~

#####INPUT SAMPLE:
The program accepts as its first argument a path to a filename. Each line in this file is one test case. Each test case will contain an integer n < 10,000.

#####OUTPUT SAMPLE:
For each line of input, the program generates a line of output which is the number of iterations to compute the palindrome, and the resulting palindrome on one line separated by a single space character. E.g.
~~~
4 9339
~~~
