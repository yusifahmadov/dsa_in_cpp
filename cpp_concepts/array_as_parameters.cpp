#include <iostream>

using namespace std;


void fun(int A[], int n){
    

    for  (int i= 0; i < n; i++){
        cout << A[i] << endl;
    }

    A[0] = 25;
}

void funP(int *A, int n){
     for  (int i = 0; i < n; i++){
        cout << A[i] << endl;
    }
}

int main(int argc, char const *argv[])
{   
    /// Arrays can be passed only by addresses
    int A[5]  = {1,2,3,4,5};
    fun(A,5);
    cout<< A[0] << endl;
    return 0;
}
