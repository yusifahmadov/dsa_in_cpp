#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int width;
};

int main(int argc, char const *argv[])
{
    

    int a  =10;
    int *p;
    p = &a;

    printf("using pointer %d", *p);


    int A[5] = {2,4,6,8,10}; 
    int *d;
    d = A;

    for (int i = 0; i< 5; i++)
    cout << d[i] << endl;
    

    int *c;
    c = new int[5]; // Heap memory allocation in c++
    // c = (int *) malloc(5 * sizeof(int)); // Heap memory allocation in c

    c[0] = 10;
    c[1] = 15;
    c[2] = 14;
    c[3] = 21;
    c[4] = 31;

     for (int i = 0; i< 5; i++)
    cout << c[i] << endl;
    
    delete [ ]c; // Heap memory delocation in c++

    cout <<sizeof(c) <<endl;



    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;


    return 0;
}
