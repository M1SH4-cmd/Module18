#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b > a) swap(b, a);
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

void swap (int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

int fib(int n){
    if(n == 0 || n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(){

    cout << gcd(66, 121) << endl;

    return 0;
}