/*
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
//Date Done: 8/8/2021 at 3:57PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=616
//https://us02web.zoom.us/rec/play/Z_VXnryQkB4WTwNi47r5iQK_-qIIiqxbQQj0QZI7cx2RGn5xcWAA7mgoJsuAdE_wUcqnYbU_xORa4uo.dIw0t88H4C2vH2DS?continueMode=true&_x_zm_rtaid=6rNcIeXSTlGQ6Y0nEfGdvA.1628452817273.f1ffdf7b0586b871227b92a9fd90315e&_x_zm_rhtaid=428
//Password: 5Sv.i$ca

using namespace std;

int main()
{
    //freopen("traffic.in","r",stdin);
    //freopen("traffic.out","w",stdout);

    int N, a = -999999999, b = 999999999;;
    cin >> N;

    string *ramps;
    int *A, *B;
    ramps = new string[N];
    A = new int[N];
    B = new int[N];

    vector<int> ans;

    for(int i = 0; i < N; ++i){
        cin >> ramps[i] >> A[i] >> B[i];
    }
    for (int i=N-1; i >= 0; i--) {
        if (ramps[i] == "none") {
            a = max(a, A[i]);
            b = min(b, B[i]);
        }
        if (ramps[i] == "off") {
            a += A[i];
            b += B[i];
        }
        if (ramps[i] == "on") {
            a -= B[i];
            b -= A[i];
            a = max(0,a);
        }
    }
    cout << a << " " << b << "\n";

    a = -999999999, b = 999999999;
    for (int i=0; i<N; i++) {
        if (ramps[i] == "none") {
            a = max(a, A[i]);
            b = min(b, B[i]);
        }
        if (ramps[i] == "on") {
            a += A[i];
            b += B[i];
        }
        if (ramps[i] == "off") {
            a -= B[i];
            b -= A[i];
            a = max(0,a);
        }
    }
    cout << a << " " << b << "\n";
/*
    for(int i = 0; i < N; ++i){
        currA = rangeBegin[i];
        currB = rangeEnd[i];

        if(ramps[i] == "none"){
            currLeftMaxOn = max(currLeftMaxOn, currA);
            currRightMinOn = min(currRightMinOn, currB);
            currLeftMinOff = min(currLeftMinOff, currA);
            currRightMaxOff = max(currRightMaxOff, currB);
        }
        else if(ramps[i] == "on"){
            onRampA = currA;
            onRampB = currB;
        }
        else if(ramps[i] == "off"){
            ans.push_back(currLeftMaxOn - onRampA);
            ans.push_back(-99999);
            ans.push_back(currRightMinOn - onRampB);
            ans.push_back(-1234567);
            ans.push_back(currLeftMinOff - currA);
            ans.push_back(-99999);
            ans.push_back(currRightMaxOff - currB);
            ans.push_back(-1234567);

            currRightMinOn = 1001;
            currLeftMaxOn = -1001;
            currRightMaxOff = -1001;
            currLeftMinOff = 1001;
        }
    }

    int count = 0;
    for(int i : ans){
        ++count;
        if(count == ans.size()){
            break;
        }
        if(i == -99999){
            cout << " ";
        }
        else if(i == -1234567){
            cout << "\n";
        }
        else{
            cout << i;
        }
    }

    delete A;
    delete B;
    return 0;
}
*/