#include <iostream>

using namespace std;

/// Tree recursion is a kind of recursion that calls itself more than one time

void fun(int n){
    if (n > 0){
        cout << n << endl;
        fun(n-1);
        cout << n << endl;
        cout << n << endl;
        fun(n-1);
     }


}


// This will work the same as the recursion function. 
// In terms of time, they are the same. O(n) for both
// In terms of space, the recursion fucntion will take O(n); however, the loop version will take O(1)
void funLoop(int n){
    while (n > 0){
        cout << n << endl;
    }
    n--;
}

int main(int argc, char const *argv[])
{
    
    
    fun(3);

    return 0;
}
