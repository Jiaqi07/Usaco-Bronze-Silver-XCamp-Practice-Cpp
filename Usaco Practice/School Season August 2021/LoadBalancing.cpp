/*
#include <vector>
#include <algorithm>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=617
typedef long long ll;

int main(){
    freopen("balancing.in","r",stdin);
    freopen("balancing.out","w",stdout);

    int N, B;
    cin >> N >> B;

    int xCow[101], yCow[101];

    for(int i = 0; i < N; ++i){
        cin >> xCow[i] >> yCow[i];
    }
    //sort(cows, cows+N);

    int ans = N;
    for(int x = 0; x < N; x++) {
        for(int y = 0; y < N; y++) {
            int xDiv = xCow[x]+1, yDiv = yCow[y]+1, upperLeft = 0, upperRight = 0, lowerLeft = 0, lowerRight = 0;
            // identify which quadrant each cows lands in
            for(int i = 0; i < N; i++) {
                if(xCow[i] < xDiv && yCow[i] < yDiv) {
                    ++lowerLeft;
                }
                if(xCow[i] < xDiv && yCow[i] > yDiv) {
                    ++upperLeft;
                }
                if(xCow[i] > xDiv && yCow[i] < yDiv) {
                    ++lowerRight;
                }
                if(xCow[i] > xDiv && yCow[i] > yDiv) {
                    ++upperRight;
                }
            }
            // figure out which region has the most cows
            int worstRegion = 0;
            if(upperLeft > worstRegion) {
                worstRegion = upperLeft;
            }
            if(upperRight > worstRegion) {
                worstRegion = upperRight;
            }
            if(lowerLeft > worstRegion) {
                worstRegion = lowerLeft;
            }
            if(lowerRight > worstRegion) {
                worstRegion = lowerRight;
            }
            // determine if we have found a better pair of fences
            if(worstRegion < ans) {
                ans = worstRegion;
            }
        }
    }
    cout << ans;
}
/*
#include <iostream>
#include <vector>
#include <algorithm>
//Started: 8/21/2021, 2:53PM, Finished around 8/27(5/10 Cases Passed) around there but Dad reset git hub cuz github aint commiting and then I redid it on 9/7/2021(3/10 test cases Passed) 9:42pm failed math test today lol
//Continued: 9/12/2021, 11:20PM, 6/10 Cases Passed
using namespace std;

typedef long long ll;

int main(){
    //freopen("balancing.in","r",stdin);
    //freopen("balancing.out","w",stdout);

    int N, B;
    cin >> N >> B;

    pair<int, int> cows[101];

    for(int i = 0; i < N; ++i){
        cin >> cows[i].first >> cows[i].second;
    }
    //sort(cows, cows+N);

    int minCow = 1e9;

    for(int i = 0; i <= 1001; i+=2){ //Since alw
        for(int j = 0; j <= 1001; j +=2){
            int I = 0, II = 0, III = 0, IV = 0;
            for(int k = 0; k < N; ++k){
                //if(i == 4 && j == 6){
                //    cout << I << " " << II << " " << III << " " << IV << '\n';
                //}

                if(cows[k].second > i && cows[k].first > j){ //First domain
                    ++I;
                }
                else if(cows[k].second > i && cows[k].first < j){ //Second domain
                    ++II;
                }
                else if(cows[k].second < i && cows[k].first < j){ //Third domain
                    ++III;
                }
                else if(cows[k].second < i && cows[k].first > j){ //Fourth domain
                    ++IV;
                }
                if(I > B || II > B || III > B || IV > B){
                    break;
                }
            }
            //cout << j << " " << i << " " << minCow << " " << '\n';
            minCow = min(max({I, II, III, IV}), minCow);
        }
    }
    cout << minCow;

    return 0;
}
 */