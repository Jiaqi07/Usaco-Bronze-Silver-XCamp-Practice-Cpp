#include <iostream>
#include <vector>
#include <algorithm>
//Started: 8/21/2021, 2:53PM, Finished around 8/27(5/10 Cases Passed) around there but Dad reset git hub cuz github aint commiting and then I redid it on 9/7/2021(3/10 test cases Passed) 9:42pm failed math test today lol
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
    sort(cows, cows+N);

    int minCow = 1e9;

    for(int i = cows[0].second-1; i <= cows[N-1].second+1; i+=2){ //Since always odd, start it off at at -1 cuz itll become even
        for(int j = cows[0].first-1; j <= cows[N-1].first+1; j +=2){
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
