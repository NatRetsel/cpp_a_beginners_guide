/*
    Write a program that copies a file. Allow the user to specify the names of the input an output files on the command line.
    Make sure that your program can copy both text and binary files.
*/
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char *argv[]) {
    unsigned char buf1[1024];

    if (argc!=4) {
        std::cout << "Usage: NAME <filename1> <filename2> <mode: binary / text>" << std::endl;
        return 1; 
    }

    std::ifstream in;
    std::ofstream out;
    if (stricmp(argv[3], "binary") == 0) {
        std::ifstream in (argv[1], std::ios::in | std::ios::binary);
        std::ofstream out(argv[2], std::ios::out | std::ios::binary);
    }else{
        std::ifstream in (argv[1], std::ios::in);
        std::ofstream out(argv[2], std::ios::out);
    }

    if (!in) {
        std::cout << "Cannot open file." << std::endl;
        return 1;
    }

    if (!out) {
        std::cout << "Cannot open file to write on." << std::endl;
        return 1;
    }

    do {
        
        if(!in.eof()){
            
            in.read((char *)buf1, sizeof buf1);
            out.write((char *)buf1, sizeof buf1);
        }
    }while (!in.eof());

    in.close();
    out.close();

    return 0;

}