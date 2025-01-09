#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{   
    // 0x0
    int* ptr;

    // 0xA 
    int var = 7;

    // 0xB
    int foo = 21;

    // 0x0 becomes 0xA
    ptr = &var;
    
    // 0x0 becomes 0xB
    ptr = &foo;

    cout << *ptr << endl;
    
    // It makes a new to call var, do not make a new address space for this. 
    // We can say that ptr points either ref and var
    int& ref = var;


    cout << sizeof(*ptr) <<endl;

    

    return 0;
}
