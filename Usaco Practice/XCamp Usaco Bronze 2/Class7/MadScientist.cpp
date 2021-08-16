/*
#include <iostream>
//Date Done: 8/10/2021 at 1:14-15PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1012
using namespace std;

int main(){
    //freopen("breedflip.in","r",stdin);
    //freopen("breedflip.out","w",stdout);

    int N, count = 0;
    cin >> N;

    string A, B;
    cin >> A >> B;

    while(A != B){
        for(int i = 0; i < N; ++i){
            if(A[i] != B[i]){
                A[i] = B[i];
                ++count;
                ++i;
                while(A[i] != B[i]){
                    A[i] = B[i];
                    ++i;
                }
            }
        }
    }
    cout << count;
    return 0;
}
*/