#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int width;

};

struct Test{
    int A[5];
    int n;
};

int area(struct Rectangle r){
    return r.length * r.width;
}

void changeLength(struct Rectangle *ptr, int newLength){
    ptr -> length = newLength;


}

/// Inside of a struct, array can be passing by value
void fun(Struct Test t1){
    t1.A[0] = 10;
    t1.A[1] = 9;
}


int main(int argc, char const *argv[])
{   
    struct Rectangle r = {10,5};
    changeLength(&r, 20);
    cout << area(r) << endl;
    cout << r.length << endl;

    struct Test t= {{1,2,3,4,5}, 5};

    fun(t);
    return 0;
}
