#include <iostream>
using namespace std;

int countWays(int n, int k = 3) {
    if (n < 0) return 0;
    if (n == 0) return 1;

    int totalWays = 0;

    for (int i = 1; i <= k; ++i) {
        totalWays += countWays(n - i, k);
    }
    return totalWays;
}

int main(){

    cout << countWays(7, 3);

}