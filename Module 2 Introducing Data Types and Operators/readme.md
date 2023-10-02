# Module 2 Mastery Check

1. What type of integers are supported by C++?
   - signed, unsigned, short, long, long long
  
2. By default, what type is 12.2?
   - double
  
3. What values can a bool variable have?
   - true or false
  
4. What is the long integer data type?
   - An integer with a 32 bit bit width in 32 bit systems. It has a minimal range of -2^15 to 2^15 -1 for signed and 0 to 2^32 -1 for unsigned.
  
5. What escape sequence produces a tab? What escape sequence rings the bell?
   - \t for tab, \a to ring the system bell.
  
6. A string is surrounded by double quotes. True or false?
   - True.
  
7. What are the hexadecimal digits?
   - 0 to 9, A to F.
  
8. Show the general form for initializaing a variable when it is declared.
   - type var_name = value;
  
9. What does the % do? Can it be used on floating-point values?
    - % is the modulo operator, it computes the remainder when the left operand is divided by the right operand. It can only be used on integers.
  
10. Explain the difference between the prefix and postfix forms of the increment operator.
    - Both forms of the ++ operator increments the operand supplied. BUT the difference becomes apparent when chaining it to an assignment.
    - int y = ++x; will increment x and assign its value to y. int y  = x++; will assign y the value of x THEN increment the value of x.
    - In other words, the increment is performed first for the prefix operation before the value is used for the rest of the expression. In the postfix form, the value is obtained before incrementing.
   
11. Which of the following are logical operators in C++?
    a. && (Yes)
    b. ## (No)
    c. || (Yes)
    d. $$ (No)
    e. ! (Yes)
    
13. How can `x = x+12;` be rewritten?
    - `x += 12`
   
14. What is a cast?
    - A cast is an explicit type conversion. 
   
15. Write a program that finds all of the prime numbers between 1 and 100.
    - Visit the solution file.
