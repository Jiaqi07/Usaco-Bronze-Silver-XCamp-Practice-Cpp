/*
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;

    int *s = new int[N];

    for(int i = 0; i < N; ++i){
        s[i] = i+1;
        cout << s[i];
        if(i != N-1){
            cout << " ";
        }
    }
    cout << '\n';

    while(next_permutation(s, s+N)){
        for(int i = 0; i < N; ++i){
            cout << s[i];
            if(i != N-1){
                cout << " ";
            }
        }
        cout << '\n';
    }
    delete s;
    return 0;
}
*/