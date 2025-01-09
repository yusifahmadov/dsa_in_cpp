#include <iostream>

using namespace std;



class Rectangle
{
    private:
        int length;
        int width;
  
    public:
        int area();
        int perimeter();
        int getLength() {
            return length;
        }
    Rectangle(int l, int w){
        length = l;
        width = w;
    }





};
int Rectangle::area(){
            return length * width ;
};

int Rectangle::perimeter(){
    return 2*(length+width);
}

int main(int argc, char const *argv[])
{

    Rectangle r(10,5);

    cout << r.area() << endl;
    cout<< r.perimeter() << endl;



    return 0;
}
