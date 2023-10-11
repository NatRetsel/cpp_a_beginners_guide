# Module 12 Mastery Check

1. Explain how try, catch, and throw work together to support exception handling.
   - The section of code to monitor for exception is ran in the try block. When an exception occurs, it can be thrown using throw in the try block and get caught in one of the defined catch block.
  
2. How must the catch list be organized when catching exceptions of both base and derived classes?
   - catch for derived class has to be placed before the base case.
  
3. Show how to specify that a MyExcpt exception can be thrown out of a function called func() that returns void.
   - `void func() throw (MyExcpt) {//... throw(MyExcpt);};`
  
4. Define an exception for the generic Queue class shown in Project 12-1. Have Queue throw this exception when an overflow or underflow occurs. Demonstrate its use.
   - Visit solution folder.
  
5. What is a generic function, and what keyword is used to create one?
   - A generic function is a function with unspecified parameter / return types which the compiler will create a specialized function when called upon and supplied the type.
  
6. Create generic versions of the quicksort() and qs() functions shown in Project 5-1. Demonstrate their use.
   - Visit solution folder.
  
7. Using the Sample class shown here, create a queue of three Sample objects using the generic Queue shown in Project 12-1:
   ```
   class Sample {
      int id;
   public:
       Sample() {id = 0;}
       Sample(int x) {id = x;}
       void show() {cout << id << endl;}
   };
   ```
   - Visit solution folder.
  
8. Rework your answer to question 7 so that the Sample objects stored in the queue are dyanamically allocated.
   - Visit solution folder.
  
9. Show how to declare a namespace called RobotMotion.
    - `namespace RobotMotion{//...};`
  
10. What namespace contains the C++ standard library?
    - std
   
11. Can a static member function access the non-static data of a class?
    - No
   
12. What operator obtains the type of an object at runtime?
    - typeid
   
13. To determine the validity of a polymorphic cast at runtime, what casting operator do you use?
    - dynamic_cast
   
14. What does const_cast do?
    - Removes the const property of a const variable or volatile.
   
15. On your own, try putting the Queue class from Project 12-1 in its own namespace called QueueCode, and into its own file called Queue.cpp. Then rework the main() function so that it uses a using statement to bring QueueCode into view.
    - Visit solution folder.
   
16. Continue to learn about C++. It is the most powerful computer language currently available. Mastering it puts you in an elite league of programmers.
