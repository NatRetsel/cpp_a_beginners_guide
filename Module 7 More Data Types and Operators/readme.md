# Module 7 Mastery Check

1. Show how to declare an int variable called test that can't be changed by the program. Give it an initial value of 100.
   - `const int test = 100;`
  
2. The volatile specifier tells the compiler that a variable might be changed by forces outside the program. True of false?
   - True.
  
3. In a multifile project, what specifier do you use to tell one file about a global variable declared in another file?
   - extern.
  
4. What is the most important attribute of a static local variable?
   - It is initialized once throughout the program's lifetime and it does not get destroyed upon leaving the scope of the function.
  
5. Write a program that contains a function called counter(), which simply counts how many times it is called. Have it return the current count.
   - Visit solution folder.
  
6. Given this fragment, which variable would most benefit from being specified as register?
   ```
    int myfunc() {
       int x;
       int y;
       int z;

       z = 10;
       y = 0;

       for (x=z; x < 15; x++)
           y += x;

       return y;
    }
   ```
   - `x`
  
7. How does & differ from &&.
   - & is bitwise AND and && is the logical AND
  
8. What does this statement do?
   ```
   x *= 10
   ```
   - multiply `x` by 10 and assign the value to `x`.
  
9. Using rrotate() and lrotate() functions from Project 7-1, it is possible to encode and decode a string. To code the string, left-rotate each letter by some amount that is specified by a key. To decode, right-rotate each character by the same amount. Use a key that consists of a string of characters. There are many ways to compute the number of rotations from the key. Be creative. The solution shown in the online answer is only one of many.
   - Visit solution folder.
  
10. On your own, expand show_binary() so that it shows all bits within an unsigned int rather than just the first eight.
    - Visit solution folder.
