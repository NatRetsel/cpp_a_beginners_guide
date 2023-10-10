# Module 10 Mastery Check

1. A class that is inherited is called a ____ class. The class that does the inheriting is called a ____ class.
   - Base, derived.
  
2. Does a base class have access to the members of a derived class? Does a dervied class have access to the members of a base class?
   - No, a base class does not have access to the members of a derived class. A derived class can have access to protected and public members of the base class.
  
3. Create a derived class of TwoDShape called Circle. Include an area() function that computes the area of the circle.
   - Visit solution folder.
  
4. How do you prevent a dervied class from having access to a member of a base class?
   - By putting the member private.
  
5. Show the general form of a constructor that calls a base class constructor.
   ` derived_classname (parameter list) : base_classname1 (parameter list), base_classname2(parameter list){//...}`

6. Given the following hierarchy:
   ```
    class Alpha {....

    class Beta: public Alpha {...

    Class Gamme : public Beta {...
   ```
   in what order are the constructors for these classes called when a Gamma object is instantiated?
   - Alpha, Beta, Gamma.
  
7. How can protected members be accessed?
   - They can be accessed normally by its own class and derived classes. They are private otherwise.
  
8. A base class pointer can refer to a derived class object. Explain why this is important as it related to function overriding.
   - When a virtual function is called through base class pointer, the type of object (base or derived) pointed to determines the version of function to be called.

9. What is a pure virtual function? What is an abstract class?
  - A pure virtual function is a virtual function declared in a base class to be redefined in derived classes. They have no function body. An abstract class is a class with at least one pure virtual classes. They cannot be instantiated as an object and can only be inherited.

10. Can an object of an abstract class be instantiated?
    - No.
   
11. Explain how the pure virtual function helps implement the "one interface, multiple mnethods" aspect of polymorphism.
    - Each derived class is free to define their own function body of the pure virtual function adhering to the generic description. Thus, the pure virtual function represents the interface, and the individual implementations corresponds to the multiple methods. 
