/*
#include <iostream>
#include <algorithm>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=988
typedef long long ll;
typedef pair<int, int> pairs;

int N, cows[1001], perm[1001] = {0}, final[1001];

//Given an end result, find the smallest permutation basically 1 2 3 instead of 2 1 3

int smallestArr(int arr[], int n)
{
    int count = 0;
    // Sort the array
    sort(arr, arr + n);

    // Swap every two consecutive elements
    for (int i = 0; i + 1 < n; i = i + 2) {
        swap(arr[i], arr[i + 1]);
        ++count;
    }
    return count;
}

int main(){
    cin >> N;
    int ans = 1e5;

    for(int i = 0; i < N-1; ++i){
        cin >> cows[i];
    }

    for(int i = 0; i <= cows[0]; ++i){ //Start the pattern off with a number(0, 1, 2, 3, 4) From left to right!
        if(cows[0]-i < 0){
            continue;
        }
        perm[0] = i;
        perm[1] = cows[0]-i;

        for(int j = 2; j <= N+1; ++j){
            perm[j] = cows[j-1]-perm[j-1];
            if(perm[j] < 0){
                fill_n(perm, N, 0);
            }
            //cout << perm[j] << " ";
        }
        int compare = smallestArr(perm, N);

        if(ans > compare){
            ans = compare;
            for(int j = 0; j <= N; ++j){
                final[j] = perm[j];
                //cout << final[i] << " ";
            }
        }
    }

    for(int i = 0; i < N; ++i){
        cout << final[i] << " ";
    }
    return 0;
}
*/