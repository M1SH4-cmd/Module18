#include <iostream>
using namespace std;

void func(int& i){
    i += 10;
    i *= 2;
}


int main(){

    int i = 10;
    int& iRef = i;

    func(iRef);
    cout << i;

    return 0;
}