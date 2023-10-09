/*
    This project creates a Set class defining a set type.

    A set is a collection of unique elements and the ordering of the members are irrelevant

    Sets support a number of operations. The ones that we will implement are
        * Adding an element to a set
        * Removing an element from a set
        * Set union
        * Set difference
    
    A union of two sets is a set that contains all of the elements from both sets. We will use the + operator to perform set union.

    The difference between two sets is a set that contains those elements in the first set that are not part of the second set. We will
    use the - operator to perform a set difference. E.g. S3 = S1 - S2 removes elements of S2 from S1, putting the result in S3.

    Set class will also include a function called isMember(), which determines if a specified element is a member of a given set.

    We will create a set that stores characters
*/
#include <iostream>

const int MaxSize = 100;

class Set {
    int len; // number of members
    char members[MaxSize]; // this array holds the set

    /*
        The find() function is private because it is not used outside the Set class.  
    */
   int find(char ch); // find an element

public:

    // Construct a null set
    Set() {len=0;}

    // Return the number of elements in the set
    int getLength() {return len;}

    void showset(); // display the set
    bool isMember(char ch); // check for membership

    Set operator + (char ch); // add an element
    Set operator - (char ch); // remove an element

    Set operator + (Set ob2); // set union
    Set operator - (Set ob2); // set difference
};

/*
    Return the index of the element specified by ch, or -1 if not found.
*/
int Set::find(char ch) {
    int i;

    for (i=0; i < len; i++) {
        if (members[i] == ch) return i;
    }
    return -1;
}

// Show the set
void Set::showset() {
    std::cout << "{ ";
    for (int i=0; i<len; i++) {
        std::cout << members[i] << " ";
    }
    std::cout << "}" << std::endl;
}

/*
    Return true if ch is a member of the set. Return false otherwise.
*/
bool Set::isMember(char ch) {
    if (find(ch) != -1) return true;
    return false;
}

// Add a unique element to the set.
Set Set::operator + (char ch) {
    Set newset;
    if(len == MaxSize) {
        std::cout << "Set is full." << std::endl;
        return *this; // return existing set
    }

    newset = *this; //duplicate existing set

    // see if element already exists
    if(find(ch) == -1) { // if not found, then add
        // add new element to the new set
        newset.members[newset.len] = ch;
        newset.len++;
    }
    return newset; // return updated set
}

// Remove an element from the set
Set Set::operator - (char ch) {
    Set newset;
    int i = find(ch); // i will be -1 if element not found

    // copy and compress the remaining elements
    for (int j=0; j<len; j++) {
        if (j!=i) newset = newset + members[j];
    }
    return newset;
}

// Set union
Set Set::operator + (Set ob2) {
    Set newset = *this; //copy the first set

    // Add unique elements from the second set
    for (int i=0; i<ob2.len; i++) {
        newset = newset + ob2.members[i];
    }
    return newset;
}

// Set difference
Set Set::operator - (Set ob2) {
    Set newset = *this; // copy the first set

    // SUbtract elements from second set.
    for (int i=0; i < ob2.len; i++) {
        newset = newset - ob2.members[i];
    }
    return newset; // return updated set
}

// Demonstrate the Set class.
int main() {
    // construct 10-element empty set
    Set s1;
    Set s2;
    Set s3;

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';

    std::cout << "s1 after adding A B C: ";
    s1.showset();

    std::cout << std::endl;

    std::cout <<"Testing for membership using isMember()" <<std::endl;
    if (s1.isMember('B')) {
        std::cout << "B is a member of s1." << std::endl;
    }else{
        std::cout << "B is not a member of s1." << std::endl;
    }

    if (s1.isMember('T')) {
        std::cout << "T is a member of s1." << std::endl;
    }else{
        std::cout << "T is not a member of s1." << std::endl;
    }

    s1 = s1 - 'B';
    std::cout << "s1 after s1 = s1 - 'B': ";
    s1.showset();

    s1 = s1 - 'A';
    std::cout << "s1 after s1 = s1 - 'A': ";
    s1.showset();

    s1 = s1 - 'C';
    std::cout << "s1 after s1 = s1 - 'C': ";
    s1.showset();

    std::cout << std::endl;

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';
    std::cout << "s1 after adding A B C: ";
    s1.showset();

    std::cout << std::endl;

    s2 = s2 + 'A';
    s2 = s2 + 'X';
    s2 = s2 + 'W';

    std::cout << "s2 after adding A X W: ";
    s2.showset();

    std::cout << std::endl;

    s3 = s1 + s2;
    std::cout << "s3 after s3 = s1 + s2: ";
    s3.showset();

    s3 = s3 - s1;
    std::cout << "s3 after s3 = s3 - s1: ";
    s3.showset();
    
    std::cout << std::endl;

    std::cout << "s2 after s2 = s2 - s2: ";
    s2 = s2 - s2;
    s2.showset();

    std::cout<<std::endl;

    s2 = s2 + 'C';
    s2 = s2 + 'B';
    s2 = s2 + 'A';

    std::cout << "s2 after adding C B A: ";
    s2.showset();


    return 0;
}