/*
    Write a program that merges two text files. Have the user specify the names of the two files on the command line in the order they should
    appear in the output file. Also, have the user specify the name of the output file. Thus, is the program is called merge, then the
    following command line will merge files MyFile1.txt annd MyFile2.txt into Target.txt:

    merge MyFile1.txt MyFile2.txt Target.txt
*/
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    unsigned char buf1[1024];
    unsigned char buf2[1024];
    if (argc != 4) {
        std::cout << "Usage: Name <filename1> <filename2> <merged filename>" << std::endl;
        return 1;
    }

    std::ifstream in1 (argv[1], std::ios::in | std::ios::binary);
    if (!in1) {
        std::cout << "Unable to open file1"<< argv[1] <<std::endl;
        return 1;
    }

    std::ifstream in2 (argv[2], std::ios::in | std::ios::binary);
    if (!in2) {
        std::cout << "Unable to open file2"<< argv[2] <<std::endl;
        return 1;
    }

    std::ofstream out (argv[3], std::ios::out | std::ios::binary);
    if (!out) {
        std::cout << "Unable to open merged file to write"<< argv[3] <<std::endl;
        return 1;
    }

    do {
        if (!in1.eof()) {
            in1.read((char *)buf1, sizeof buf1);
            out.write((char *)buf1, sizeof buf1);
        }
    }while(!in1.eof());
    
    do {
        if (!in2.eof()) {
            in2.read((char *)buf2, sizeof buf2);
            out.write((char *)buf2, sizeof buf2);
        }
    }while(!in2.eof());
    in1.close();
    in2.close();
    out.close();

    return 0;
}