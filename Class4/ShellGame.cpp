/*
#include <iostream>
#include <algorithm>
#include <string>
//Date Done: 8/5/2021 at 12:11pm
//http://www.usaco.org/index.php?page=viewproblem2&cpid=891
using namespace std;

void swap(int s[3], int & a, int & b)
{
    int x = s[b-1], y = s[a-1];
    s[a-1] = x;
    s[b-1] = y;
}


int main() {
    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);

    int N, count = 0;
    cin >> N;

    int shells[3] = {1, 2, 3};

    int *swapBegin, *swapEnd, *guess, *guessAnswer;
    swapBegin = new int[N];
    swapEnd = new int[N];
    guess = new int[N];
    guessAnswer = new int[N];

    for(int i = 0; i < N; ++i){
        cin >> swapBegin[i] >> swapEnd[i] >> guess[i];
    }

    for(int i = 0; i < N; ++i){
        swap(shells, swapBegin[i], swapEnd[i]);
        //for(int i = 0; i < 3; ++i){
        //    cout << shells[i] << " ";
        //}
        //cout << "\n";
        guessAnswer[i] = shells[guess[i]-1];
    }

    int count1 = 0, count2 = 0, count3 = 0;

    for(int i = 0; i < N; ++i){
        if(guessAnswer[i] == 1){
            ++count1;
        }
        else if(guessAnswer[i] == 2){
            ++count2;
        }
        else if(guessAnswer[i] == 3){
            ++count3;
        }
    }
    cout << max(count1, max(count2, count3));

    return 0;
}
*/