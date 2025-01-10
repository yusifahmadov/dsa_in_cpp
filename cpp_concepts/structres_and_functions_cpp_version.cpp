#include <iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int width;

    public:
        void initialize(int l, int w){
            length = l;
            width = w;
        }


        int area(){
            return length *  width;
        }

        void changeLength(int l){
            length = l;
        }

    Rectangle(int l, int w){
        length = l;
        width = w;
    }

};

int main(int argc, char const *argv[])
{

    
    Rectangle r(10,5);


    r.changeLength(20);
    cout << r.area() << endl;
    





    return 0;
}
