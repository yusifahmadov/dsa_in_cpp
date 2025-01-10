#include <iostream>

using namespace std;


void swap (int *x, int *y ){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;


}

void swapByReference(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y= temp;
}



int main(int argc, char const *argv[])
{
    int a ,b;
    a = 10;
    b = 20;
    swap(&a,&b);
    swapByReference(a,b);
    
    printf("%d %d", a,b);
    return 0;
}
