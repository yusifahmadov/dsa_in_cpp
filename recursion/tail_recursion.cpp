#include <iostream>

using namespace std;

/// Tail recursion is a kind of recursion that calls itself 
/// after the execution of the main function

void fun(int n){
    if (n > 0){
        cout << n << endl;
        fun(n-1);
     }


}
void funN(int n){
    if (n > 0){
        cout << n << endl;
        // This is not a tail recursion as it does something such as adding n
        fun(n-1) + n;
     }

}


int main(int argc, char const *argv[])
{
    
    


    return 0;
}
