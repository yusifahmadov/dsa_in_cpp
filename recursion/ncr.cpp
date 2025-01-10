#include <iostream>


using namespace std;

int fact(int n){

    if(n == 0) return 1;

    return fact(n-1) * n;


}

int nCr(int n, int r){

    int num, den;

    num = fact(n);
    den = fact(r) * fact(n-r);

    return num/den;



}


int nCrR(int n, int r){

    if( n== r || r == 0) return 1;
    
    return nCrR(n-1, r-1) + nCrR(n-1,r);

}


int main(int argc, char const *argv[])
{   


    cout << nCrR(5,3) << endl;
    
    return 0;
}
