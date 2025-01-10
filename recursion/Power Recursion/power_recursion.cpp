#include <iostream>


using namespace std;



int power(int m, int n)
{
    if(n == 0) return 1;

    return pow(m, n-1) * m;
}

int powModified(int m ,int n){
    if (n ==0 ) return 1;

    if(n % 2 == 0){
        return pow(m * m , n /2 );
    }else{
        return m * pow(m*m, (n-1)/2);
    }
    
}


int main(int argc, char const *argv[])
{
    int r;
    r = powModified(2,4);

    cout << r << endl;
    return 0;
}
