#include <iostream>

using namespace std;


// return fun(4) + 4
// return fun(3) + 3
// return fun(2) + 2
// return  fun(1) + 1
// return 0

int fun (int n){
    static int x= 0;
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int r;

    r = fun(5);

    cout<< r << endl;


    return 0;
}
