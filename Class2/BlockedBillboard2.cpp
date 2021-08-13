/*
#include <iostream>
#include <vector>
#include <algorithm>
//Date Done: 8/3/2021 at 12:59PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=783
using namespace std;

int findArea(int x1, int y1, int x2, int y2){ //Assume x1 y1 is lower left and x2 y2 upper right
    return (x2-x1) * (y2-y1);
}

int main() {
    //freopen("billboard.in","r",stdin);
    //freopen("billboard.out","w",stdout);

    int totalArea = 0, mow_X1, mow_Y1, mow_X2, mow_Y2, feed_X1, feed_Y1, feed_X2, feed_Y2;

    cin >> mow_X1 >> mow_Y1 >> mow_X2 >> mow_Y2 >> feed_X1 >> feed_Y1 >> feed_X2 >> feed_Y2;

    if(mow_X1 >= feed_X1 && mow_Y1 >= feed_Y1 && mow_X2 <= feed_X2 && mow_Y2 <= feed_Y2){ //Checks if all covered
        totalArea = 0;
    }
    else if(feed_X2 >= mow_X2 && feed_X1 > mow_X1 && feed_Y2 >= mow_Y2 && feed_Y1 <= mow_Y1){ // On Right Side
        totalArea = abs(feed_X1 - mow_X1) * abs(mow_Y2 - mow_Y1);
    }
    else if(feed_X2 < mow_X2 && feed_X1 <= mow_X1 && feed_Y2 >= mow_Y2 && feed_Y1 <= mow_Y1){ // On Left Side
        totalArea = abs(feed_X2 - mow_X2) * abs(mow_Y2 - mow_Y1);
    }
    else if(feed_X2 >= mow_X2 && feed_X1 <= mow_X1 && feed_Y2 >= mow_Y2 && feed_Y1 > mow_Y1 && feed_Y1 < mow_Y2){ // On Top Side
        totalArea = abs(mow_X2 - mow_X1) * abs(feed_Y1 - mow_Y1);
    }
    else if(feed_X2 >= mow_X2 && feed_X1 <= mow_X1 && feed_Y2 < mow_Y2 && feed_Y1 <= mow_Y1 && feed_Y2 > mow_Y1){ // On Bottom Side
        totalArea = abs(mow_X2 - mow_X1) * abs(feed_Y2 - mow_Y2);
    }
    else{ //None Covered or doesn't satisfy conditions
        totalArea = abs(mow_X1 - mow_X2) * abs(mow_Y1 - mow_Y2);
    }

    cout << totalArea;
    return 0;
}
*/