#include <iostream>
#include <vector>
using namespace std;

void swapvec(vector<int>& vec, int* arr){
    for(int i = 0; i < 4; i++){
        int t = vec[i];
        vec[i] = *(arr + i);
        *(arr + i) = t;
    }
}

int main(){

    vector<int> vec1 = {1, 2, 3, 4};

    int arr[] = {5, 6, 7, 8};

    swapvec(vec1, arr);

    for(int i = 0; i < 4; i++){
        cout << vec1[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }


}
