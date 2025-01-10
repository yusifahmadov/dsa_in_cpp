#include <iostream>

using namespace std;

int factorial (int n){
    if( n == 0) return 1;

    return factorial(n-1) * n;

    
}

int Ifactorial(int n){
    int s = 1;
    

    for (int i = 1; i <= n; i ++){
        s = s * i;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    
    int r;
    r = Ifactorial(5);

    cout << r << endl;
    
    return 0;
}
