/*
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1084 Started: 7/31/2021 at 1030pm - 1230pm, 5 out of 12 test cases - 7 runtime

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int duplicateCount(const int cowStall[], int n){
    int duplicates = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(cowStall[i] == cowStall[j]){
                ++duplicates;
                break;
            }
        }
    }
    return duplicates;
}

int main() {
    int n, x, duplicates = 0;
    bool didExit = false;
    long long count = 0;
    cin >> n;

    int *cowHeight, *cowStall;
    cowHeight = new int[n];
    cowStall = new int[n];

    for(int i = 0; i < n; ++i){
        cin >> x;
        cowHeight[i] = x;
    } //INPUT FOR COWHEIGHTS
    for(int i = 0; i < n; ++i){
        cin >> x;
        cowStall[i] = x;
    } //INPUT FOR COWSTALLS

    sort(cowStall, cowStall + n);
    duplicates = duplicateCount(cowStall, n);

    //EVERYTHING ABOVE IS JUST SETTING UP FOR THE ACTUAL PROBLEM SOLVING DOWN BELOW
    // VVVVV - The problem solving lol

    for (int i = 0; i < n; ++i) { cout <<  cowHeight[i] << " "; }
    cout << "\n";
    for (int i = 0; i < n; ++i) { cout << cowStall[i] << " "; }

    for(int j = 0; j < n; ++j){ //Default Pattern
        if(cowHeight[j] > cowStall[j]){
            didExit = true;
            break;
        }
    }
    if(!didExit){
        didExit = false;
        ++count;
        count += duplicates;
    }

    while(next_permutation(cowStall, cowStall + n)){
        for(int j = 0; j < n; ++j){
            if(cowHeight[j] > cowStall[j]){
                didExit = true;
                break;
            }
        }
        if(didExit){
            didExit = false;
        }
        else{
            ++count;
            count += duplicates;

        }
        //cout << cowStall[0] << " " << cowStall[1] << " " << cowStall[2] << " " << cowStall[3] << " " << count << " " << duplicates << "\n";
    }
    cout << count;
}
*/