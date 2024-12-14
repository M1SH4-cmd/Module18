#include <iostream>
#include <vector>
using namespace std;

void func(vector<int>& vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
        vec[i] *= 2;
    }
}


int main(){
    vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    func(vec1);
    cout << endl;

    for(int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }
    cout << endl;

    return 0;
}