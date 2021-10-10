/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, D, ans = 0, s[1001], f[1001];
    cin >> N >> D;

    for(int i = 0; i < N; ++i){
        f[i] = 1;
        cin >> s[i];
    }
    stable_sort(s, s + N); //Sorts with and keeps keys in order

    for(int i = 1; i < N; ++i){
        for(int j = 0; j < i; ++j){
            if(s[i] < s[j]+D){break;}

            f[i] = (f[i] + f[j]) % 1000000007;
        }
    }

    for(int i = 0; i < N; ++i){ans = (ans + f[i]) % 1000000007;}
    cout << ans;
    return 0;
}
*/