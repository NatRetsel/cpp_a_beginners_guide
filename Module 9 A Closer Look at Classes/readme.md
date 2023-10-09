# Module 9 Mastery Check

1. What is a copy constructor and when is it called? Show the general form of a copy constructor.
   - A copy constructor is a constructor used to make a copy of an object outside of regular assignment operator and only during initialization as a copy
   - General form `classname (const classname &obj){ //body}`. Used in `MyClass x = y`, `x is a copy of y`. However if `MyClass x; MyClass y; x=y` will not invoke copy constructor.
  
2. Explain what happens when an object is returned by a function. Specifically, when is its destructor called?
   - When an object is returned by a function, a temporary object is automatically created, holding the return value. After the value is returned, the object is destroyed.
  
3. Given this class:
   ```
   class T {
      int i, j;
   public:
       int sum() {
         return i+j;
     }
   };
   ```
   show how to rewrite sum() so that it uses this.
   ```
   class T {
      int i, j;
   public:
       int sum() {
         return this->i + this->j;
     }
   };
   ```
4. What is a structure? What is a union?
   - A structure is another way to define a class in c++. Members are defaulted to be public. A union is a class in which all data members share the same memory, members are public by default.
  
5. Inside a member functions, to what does *this refer?
   - *this refer to the current object that is invoking the member function.
  
6. What is a friend function?
   - A friend function is a nonmember function granted access to non public members of a class.
  
7. Show the general form used for overloading a binary member operator function.
   - In the protoype: `return_type operator (*) (parameter list);`. In the definition: `return_type classname::operator (*) (parameter list){}`.
  
8. To allow operations involving a class type and a built-in type, what must you do?
   - Two friend operator functions, one with class type as the first parameter, and one with the built-in type as the first parameter and one with the class type as the first parameter.
  
9. Can the ? be overloaded? Can you change the precedence of an operator?
    - No and No.
  
10. For the Set class developed in Project 9-1, define < and > so that they determine if one set is a subset or superset of another set. Have < return true if the left set is a subset of the set on the right, and false otherwise. Have > return true if the left set is a superset of the set on the right, and false otherwise.
    - Visit solution folder.
   
11. For the Set class, define the & so that it yields the intersection of two sets.
    - Visit solution folder.
   
12. On your own, try adding other Set operators. For example, try defining | so that it yields the symmetric difference between two sets. The symmetric difference consists of those elements that the two sets do not have in common.
    - Visit solution folder.
