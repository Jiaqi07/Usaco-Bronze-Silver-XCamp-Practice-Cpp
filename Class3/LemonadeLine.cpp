/*
#include <iostream>
#include <vector>
#include <algorithm>
//Date Done: 8/4/2021 at 12:33PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=835
using namespace std;

int main() {
    //freopen("lemonade.in","r",stdin);
    //freopen("lemonade.out","w",stdout);

    int N, count = 0;
    cin >> N;

    int *cows;
    cows = new int[N];

    for(int i = 0; i < N; ++i){
        cin >> cows[i];
    }

    sort(cows, cows+N);

    for(int i = N-1; i >= 0; --i){
        if(cows[i] >= count){
            ++count; //Count is how many cows are in the line currently
        }
        else{
            break; //This will be the smallest answer possible because you check the most patient or biggest wait time cow first
        }
    }

    cout << count;

    return 0;
}
 */
/* Permutation method to slow
    vector<int> tempCompare;
    int minAns = 99999, count = 0;
    for(int i = 0; i < N; ++i){
        if(tempCompare.size() <= cows[i]){
            cout << count << " " << cows[i] << " " << tempCompare.size() << "\n";
            tempCompare.push_back(cows[i]);
            ++count;
        }
    }

    minAns = min(minAns, count);
    count = 0;

    for(int i = 0; i <N; ++i)  cout << cows[i] << "\n";

    while(next_permutation(cows, cows+N)){
        tempCompare.clear();
        for(int i = 0; i < N; ++i){
            if(tempCompare.size() <= cows[i]){
                ++count;
                tempCompare.push_back(cows[i]);
            }
        }

        //cout << " " << count << "\n";
        minAns = min(minAns, count);
        count = 0;
    }
    */