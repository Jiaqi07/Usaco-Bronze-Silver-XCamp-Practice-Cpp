/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n, x, y;
    string dirS;

    cin >> n;

    string *dir;
    int *cowX, *cowY;
    dir = new string[n];
    cowX = new int[n];
    cowY = new int[n];
    vector<int> index;

    for (int i = 0; i < n; ++i) {
        cin >> dirS >> x >> y;
        dir[i] = dirS;
        cowX[i] = x;
        cowY[i] = y;
    }

    //for (int i = 0; i < n; ++i) { cout << dir[i] << " " << cowX[i] << " " << cowY[i] << "\n"; } //Output input

    int currX, currY, compareX, compareY, minAns, xBranch, yBranch;

    for (int i = 0; i < n; ++i) { //each cow
        currX = cowX[i];
        currY = cowY[i];
        minAns = 999999;

        if(dir[i] == "E"){ //If the cow is headed east
            for(int j = 0; j < n; ++j){
                compareX = cowX[j];
                compareY = cowY[j];

                if(dir[j] == "N" && compareX > currX && compareY < currY && (currX != compareY && currY != compareX)){ //Compares with North to see if collide
                    yBranch = currY-compareY;
                    xBranch = compareX-currX;
                    if(yBranch < xBranch){
                        minAns = min(minAns, xBranch);

                        if(!getIndex(index, i)){
                            cowX[i] = currX + xBranch;
                            cowY[i] = currY + yBranch;
                        }
                        else{
                            index.push_back(i);
                        }
                    }
                }
            }
        }
        else if(dir[i] == "N"){ //If the cow is headed North
            for(int j = 0; j < n; ++j){
                compareX = cowX[j];
                compareY = cowY[j];

                if(dir[j] == "E" && compareX < currX && compareY > currY && (currX != compareY && currY != compareX)){ //Compares with North to see if collide
                    xBranch = currX-compareX;
                    yBranch = compareY-currY;

                    if(xBranch < yBranch){
                        minAns = min(minAns, yBranch);

                        if(!getIndex(index, i)){
                            cowX[i] = currX + xBranch;
                            cowY[i] = currY + yBranch;
                        }
                        else{
                            index.push_back(i);
                        }
                    }
                }
            }
        }

        if(minAns != 999999){
            cout << minAns << "\n";
        }
        else{
            cout << "Infinity" << "\n";
        }
    }

}
*/