/*
#include <iostream>
//Date Done: 8/10/2021 at 11:52PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=784
using namespace std;

int main(){
    //freopen("lifeguards.in","r",stdin);
    //freopen("lifeguards.out","w",stdout);

    int N, maxShift = -999, shiftTime = 0;
    cin >> N;
    int startShift[101] = {0}, endShift[101] = {0}; //Array initilization

    for(int i = 0; i < N; ++i){ //Input
        cin >> startShift[i] >> endShift[i];
    }

    for(int fire = 0; fire < N; ++fire){ //Who to fire
        int shifts[1001] = {0}; //Redeclare variable as zero everytime

        for(int i = 0; i < N; ++i){ //Setup each shift individually
            for(int j = startShift[i]; j < endShift[i]; ++j){
                ++shifts[j];
            }
        }

        for(int i = startShift[fire]; i < endShift[fire]; ++i){
            --shifts[i];
        }

        for(int x : shifts){
            if(x >= 1){
                ++shiftTime;
            }
        }

        //for(int x : shifts){
        //    cout << x << ", ";
        //}

        //cout << shiftTime << "\n";
        maxShift = max(shiftTime, maxShift);
        shiftTime = 0;
    }

    cout << maxShift;
    return 0;
}
*/