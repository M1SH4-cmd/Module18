#include <iostream>
using namespace std;

int power(int num, int deg = 2){
    int res = 1;
    for(int i = 0; i < deg; i++){
        res *= num;
    }
    return res;
}

void foo(int i = 1, float j = 2.5, string str = "Hello, world!"){
    cout << i << " " << j << " " << str << endl;
}



int main(){

    foo();
    return 0;
}