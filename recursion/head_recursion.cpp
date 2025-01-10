#include <iostream>

using namespace std;

/// Head recursion is a kind of recursion that calls itself 
/// before the execution of the main function. If there is something before the calling function
/// then, it is not considered  head recursion

void fun(int n){
    if (n > 0){
        /// There is nothing before the function fun(n-1)
        fun(n-1);
        cout << n << endl;
     }


}


// This will work the same as the recursion function. 
// In terms of time, they are the same. O(n) for both
// In terms of space, the recursion fucntion will take O(n); however, the loop version will take O(1)
void funLoop(int n){
    int i =1;
    while (n <= n){
        cout << n << endl;
        i++;
    }
}

int main(int argc, char const *argv[])
{
    
    


    return 0;
}
