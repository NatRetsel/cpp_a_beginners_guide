# Module 8 Mastery Check

1. What is the difference between a class and an object?
   - A class is a blueprint for an object and the object is an instance of the class.
  
2. What keyword is used to declare a class?
   - Class
  
3. What does each object have its own copy of?
   - Each object have its own instance variables and functions.
  
4. SHow how to declare a class called test that contains two private int variables called count and max.
   ```
   class Test{
      int count;
      int max;
   public:
      Test(int count, int max) {
          this->count = count;
          this->max = max;
       }
   };
   ```

5. What name does a constructor have? What name does a destructor have?
   - A constructor has the same name as the name of the class. A destructor follows suit but with a "~" before it.
  
6. Given this class declaration:
   ```
    class Sample {
       int i;
     public:
       Sample(int x) {i = x}
       //...
   };
   ```
   show how to declare a Sample object that initializes i to the value 10.
   - `Sample my_sample(10);`
   - `Sample my_sample = 10;`
   - `Sample my_sample = Sample(10);`
  
7. When a member function is declared within a class declaration, what optimization automatically takes place?
   - The compiler treats it like an inline function, if possible. An inline function gets expanded inline at the point at which is it invoked, instead of actually being called. This eliminates the overhead of a function call. When a function is inlined, the compiler replaces the function call with the body of the function itself.
  
8. Create a class called Triangle that stores the length of the base and height of a right triangle in two private instance variables. Include a constructor that sets these values. Define two functions. The first is hypot(), which returns the length of the hypothenuse. The second is area(), which returns the area of the triangle.
   - Visit solution folder.

9. Expand the Help class so that it stores an integer ID number that identifies each user of the class. Display the ID when a help object is destroyed. Return the ID when the function getID() is called.
    - Visit solution folder.
  
10. Expand the Help class so that it stores an integer ID number that identifies each user of the class. Display the ID when a help object is destroyed. Return the ID when the function getID() is called.
    - Visit solution folder.
