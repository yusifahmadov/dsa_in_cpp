#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Reference is a nickname given to a variable

    int a = 10; // It is located in stack with 10 value

    int &r = a; // If the address of a is 200, then r is also 200

    cout << r << endl; // 10

    r++;

    cout << r << endl; // 11
    cout << a << endl; // 11
    
    /* code */
    return 0;
}
