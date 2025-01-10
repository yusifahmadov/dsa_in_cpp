#include <iostream>

using namespace std;


double e(int x, int n){
    double s = 1;

    for (int i = n; i> 0; i--){
            s = 1 + s*x/i;
    }

    return s;


}

double eR(int x, int n){

    static double s = 1;

    if ( n== 0) return s;

    s = 1+ x*s/n;

    return eR(x, n-1);

    




}

int main(int argc, char const *argv[])
{
    
    
    cout << e(1,10) <<endl;

    return 0;
}
