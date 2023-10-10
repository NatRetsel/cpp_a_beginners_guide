# Module 11 Mastery Check

1. What are the four predefined streams called?
   - cin, cout, cerr, clog.
  
2. Does C++ define both 8-bit and wide-character streams?
   - Yes
  
3. Show the general form for overloading an inserter.
   - `ostream &operator << (ostream &stream, class_type obj) { //... return stream;}`
  
4. What does `ios::scientific` do?
   - It is an fmtflag formating output numbers in scientific notation.
  
5. What does `width()` do?
   - Sets the field width of the output stream.
  
6. An I/O manipulator is used within an I/O expression. True or False?
   - True.
  
7. Show how to open a file for reading text input.
   - `ifstream in (argv[1], ios::in);`
  
8. Show how to open a file for writing text output.
   - `ofstream out (argv[2], ios::out);`
  
9. What does `ios::binary` do?
   - opens the file in binary mode.
  
10. When the end of the file is reached, the stream variable will evaluate as false. True or False?
    - True.
   
11. Assuming a file is associated with an input stream called strm, show how to read to the end of the file.
    ```
    unsigned char buf[1024];
    do{
      if (!strm.eof()){
        strm.read((char *)buf, sizeof buf);
      }
    } while (!strm.eof());
    ```
12. Write a program that copies a file. Allow the user to specify the name of the input and output file on the command line. Make sure that your program can copy both text and binary files.
    - Visit solution folder.
   
13. Write a program that merges two text files. Have the user specify the names of the two files on the command line in the order they should appear in the output file. Also, ahve the user specify the name of the output file. Thus if the program is called merge, then the following command line will merge the files MyFile1.txt and MyFile2.txt into Target.txt: `mege MyFile1.txt MyFile2.txt`.
    - Visit solution folder.
   
14. SHow how the seekg() statement will seek to the 300th byte in a stream called MyStrm.
    - `MyStrm.seekg(300, ios::beg);`
