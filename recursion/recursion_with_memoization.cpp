#include <iostream>


using namespace std;

int F[51];

int fib(int n ){

    if(n <=1){
        return n;
    }

    if(F[n] != -1){
        return F[n];
    }

    F[n] = fib(n-1) + fib(n-2);

    return F[n];

}



int main(int argc, char const *argv[])
{
     for(int i; i < 51; i++){
        F[i] = -1;
    }
    cout << fib(5) << endl;
    return 0;
}
