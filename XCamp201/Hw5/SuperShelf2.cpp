/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, shelfHeight, minHeight = 1e9;
vector<int> cows;

void shelf(vector<int> s, int height_sum, int index) //Decision tree
{
    if(height_sum > shelfHeight){ //Check if it's larger cuz no point if it already is larger than shelf
        if(height_sum < minHeight){ //If the current sum is the smallest, than set min to it.
            minHeight = height_sum;
        }
        return; //go back cuz no point if larger
    }

    if(index >= N || index < 0){ //Out of bounds
        return;
    }

    shelf(cows, height_sum, index+1); //Rejects current index number
    shelf(cows, height_sum+cows[index], index+1); //Accepts current index number
}

int main(){
    cin >> N >> shelfHeight; //N is amount of cows and ShelfHeight is the shelf I guess

    for(int i = 0; i < N; ++i){ //Input
        int in;
        cin >> in;
        cows.push_back(in);
    }
    shelf(cows, 0, 0); //Start the recursion

    cout << minHeight-shelfHeight; //Minus by shelf to get final answer cuz it's difference!
    return 0;
}
*/