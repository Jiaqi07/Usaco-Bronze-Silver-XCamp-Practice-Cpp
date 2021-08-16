/*
#include <iostream>
using namespace std;
int gcd(int a, int b){
    if (a == 0){
        return b;
    }
    if (b == 0 || a == b){
        return a;
    }
    if (a > b){
        return gcd(a-b, b);
    }
    return gcd(a, b-a);
}
int main() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B);
    return 0;
}
*/