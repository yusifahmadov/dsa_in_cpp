#include <iostream>

using namespace std;

struct Rectangle{
    int length; // 2 bytes
    int width; // 2 bytes
    
};



int main(int argc, char const *argv[])
{
    struct Rectangle r = {10,5};

    struct Rectangle *p = &r;  // Pointer takes always 2 bytes regardless of type

    r.length = 15;

    // p.length = 20; // We cannot do this as p is not a variable, we cannot access the variables of the struct
    p -> length = 20; // This is the way of assigning value to a pointer variable




    struct Rectangle *pointer; 

    pointer = new Rectangle; // This will be created in heap

    pointer -> length = 10;
    pointer -> width = 20;

    cout << pointer->length << endl << pointer->width << endl;



    return 0;
}
