#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};



int main(int argc, char const *argv[])
{
    
    struct Rectangle y;
    struct Rectangle x = {10,5};

    x.length = 50;
    cout << x.length << endl;
    return 0;
}
