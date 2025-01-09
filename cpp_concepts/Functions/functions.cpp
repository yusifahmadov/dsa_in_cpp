#include <iostream>

using namespace std;


bool saveEarth(bool vSaveEarth){

    bool saveEarth = true;

    if(saveEarth == true && vSaveEarth == true){
        cout << "Save the Earth" <<endl;
    }else{
        cout << "Do not need to save" << endl;
    }
    return saveEarth;

}

int add (int a, int b) { // Here x and y are the formal parameters
    int c;
    c = a+b;

    return c;
}




int main(int argc, char const *argv[])
{   
    int x,y,z;

    x =10;
    y= 5;

    z = add (x,y); // Here x and y are the actual parameters

    cout << z << endl;

   bool savingTheEarth = saveEarth(true);

   cout << savingTheEarth << endl;
    return 0;
}
