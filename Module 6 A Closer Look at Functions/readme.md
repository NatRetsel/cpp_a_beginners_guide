# Module 6 Mastery Check

1. What are the two ways that an argument can be passed to a subroutine?
   - Pass by value or pass by reference.
  
2. In C++, what is a reference? How is a reference parameter created?
   - A reference is simply an alias for an existing variable. A reference parameter is created with the `&`. E.g. `int &ref = x;`, where `x` is some int variable.
  
3. Given this fragment,
   ```
    int f(char &c, int *i);
     //...
     char ch = 'x'; int i = 10;
   ```
   Show how to call f() with the ch and i.
   - `f(ch, &i);`
  
4. Create a void function called round() that rounds the value of its double argument to the nearest whole value. Have round() use a reference parameter and return the rounded result in this parameter. You can assume that all values to be rounded are positive. Demonstrate round() in a program. To solve this problem, you will need to use the modf() standard library function, which is shown here:
   `double modf(double num, double *i)`
   The modf() function decomposes num into its integer and fractional parts. It returns the fractional portion and places the integer part in the variable pointed to by i. It requires the header <cmath>.
   - Visit solution folder.

5. Modify the reference version of swap() so that in addition to exchanging the values of its arguments, it returns a reference to the smaller of its two arguments. Call this function min_swap().
   - Visit solution folder.
  
6. Why can't a function return a reference to a local variable?
   - The local variable ceased to exist after the function exits, hence there cannot be a reference to something which doesn't exist.
  
7. How must the parameter lists of two overloaded functions differ?
   - They must differ in the parameter types and/or the number of parameters.
  
8. In Project 6-1, you created a collection of print() and println() functions. To these functions, add a second parameter that specifies an indentation level. For example, when print() is called like this,
   `print ("test", 18)`;
   output will indent 18 spaces and then displays the string "test". Have the indentation parameter default to 0 so that when it is not present, no indentation occurs.
   - Visit solution folder.

9. Given this protoype,
    ```
      bool myfunc(char ch, int a=10, int b=20);
    ```
    show the ways that myfunc() can be called.
   - `myfunc('a'); myfunc('a',2); myfunc('a',2,3)`
  
10. Briefly explain how function overloading can introduce ambiguity.
    - Ambiguity is introduced when the compiler has no clear distinction to which type the parameter supplied should be casted to.
    - For example, if there are two overloaded functions that takes double and float parameter respectively, then calling the function with `func(10.0)` creates an ambiguity as there is the question of whether `10.0` should be treated as a double or float?
