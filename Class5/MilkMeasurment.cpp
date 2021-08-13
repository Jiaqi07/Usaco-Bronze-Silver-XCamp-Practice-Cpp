/*
#include <iostream>
#include <algorithm>
#include <string>
//Date Done: 8/8/2021 at 4:56PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=761

using namespace std;

int main()
{
    //freopen("measurement.in","r",stdin);
    //freopen("measurement.out","w",stdout);

    int N, day, change, who;
    string cow;
    cin >> N;

    int cows[100] = {0};
    int log[100] = {0};

    for(int i = 0; i < N; ++i){ //Input and setting stuff up
        cin >> day >> cow >> change;
        if(cow == "Mildred"){
            who = 1;
        }
        else if(cow == "Elsie"){
            who = 2;
        }
        else if(cow == "Bessie"){
            who = 3;
        }
        cows[day-1] = who;
        log[day-1] = change;
    }

    int bes = 7, els = 7, mil = 7, curMax = 0, changes = 0; //Default value of 7
    bool besTop = false, elsTop = false, milTop = false;
    bool besNext = false, elsNext = false, milNext = false;

    for(int i = 0; i < 100; ++i){ //Go through array, each time add whoever's change and then compare the max out of all to count current top change
        if(cows[i] == 0){
            continue;
        }
        else if (cows[i] == 1){
            bes += log[i];
        }
        else if(cows[i] == 2){
            els += log[i];
        }
        else if(cows[i] == 3){
            mil += log[i];
        }
        curMax = max(bes, max(els, mil));

        besNext = (curMax == bes);
        elsNext = (curMax == els);
        milNext = (curMax == mil);

        if(besTop != besNext || elsTop != elsNext || milTop != milNext){
            //cout << bes << " " << els << " " << mil << "\n";
            ++changes;
        }
        besTop = besNext;
        elsTop = elsNext;
        milTop = milNext;
    }
    cout << changes;

    return 0;
}
*/