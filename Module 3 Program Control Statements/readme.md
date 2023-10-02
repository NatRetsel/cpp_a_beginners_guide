# Module 3 Mastery Check

1. Write a program that reads characters from the keyboard until a $ is typed. Have the program count the number of periods. Report the total at the end of the program.
   - Visit solution folder
  
2. In the switch, can the code sequence from one case run into the next? Explain.
   - Yes. In the absence of a break statement, the code sequence keeps running into the subsequent case until it encounters a break or it exits the block.
  
3. Show the general form of the if-else-if ladder.
   - `if (condition) {statement;} else if (condition) {statement;}`
  
4. Given
   ```
    if (x < 10)
       if (y > 100) {
         if (!done) x = z;
         else y = z;
       }
     else cout << "error"; // what if?
   ```
   to what if does the last else associate?
   - the very first if.
  
5. Show the for statement for a loop that counts from 1000 to 0 by -2.
   - `for (int i=1000; i >=0; i-=2)`
  
6. Is the following fragment valid?
   ```
    for (int i=0; i < num; i++)
       sum +=i;
     count = i;
   ```
   - No, `i` only exists within the scope of the for loop and is undefined outside of it.
  
7. Explain what break does.
   - break terminates the immediate loop the code block is a part of, continuing the rest of the code outside of the loop.
  
8. In the following fragment, after the break statement executes, what is displayed?
   ```
    for (i = 0; i < 10; i++) {
       while (running) {
           if (x<y) break;
             //...
       }
       cout << "after while\n";
    }
    cout << "After for\n";
   ```
   - the 2 cout statements get executed.
  
9. What does the following fragment print?
    ```
      for (int i=0; i<10; i++) {
        cout << i << " ";
        if (!(i%2)) continue;
        cout << "\n";
      }
    ```
    - 2,4,6,8
  
10. The increment expression in a for loop need not always alter the loop control variable by a fixed amount. Instead, the loop control variable can change in any arbitrary way. Using this concept, write a program that uses a for loop to generate and display the progression 1,2,4,8,16,32 and so on.
    - Visit solution folder.
11. The ASCII lowercase letters are separated from the uppercase letters by 32. Thus, to convert a lowercase letter to uppercase, subtract 32 from it. Use this information to write a program that reads characters from the keyboard. Have it convert all lowercase letters to uppercase, and all uppercase letters to lowercase, displaying the result. Make no changes to any other character. Have the program stop when the user enters a $. At the end, have the program display the number of case changes that have taken place.
    - Visit solution folder.
12. What is C++'s unconditional jump statement?
    - goto.
