/*
#include <iostream>
#include <vector>
#include <algorithm>
//Date Done: 8/3/2021 at 12:59PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=759
//https://www.youtube.com/watch?v=8-w_3ITQWuw&ab_channel=KrishnaRamesh
using namespace std;

int findArea(int x1, int y1, int x2, int y2){ //Assume x1 y1 is lower left and x2 y2 upper right
    return (x2-x1) * (y2-y1);
}

int main() {
    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);

    int totalArea, b1x1, b1y1, b1x2, b1y2, b2x1, b2y1, b2x2, b2y2, tx1, ty1, tx2, ty2;

    cin >> b1x1 >> b1y1 >> b1x2 >> b1y2 >> b2x1 >> b2y1 >> b2x2 >> b2y2 >> tx1 >> ty1 >> tx2 >> ty2;

    totalArea = findArea(b1x1, b1y1, b1x2, b1y2) + findArea(b2x1, b2y1, b2x2, b2y2); //Calculate two billboards area
    //cout << totalArea << "\n";

    int truck_X1_Intersect = max(0, (min(b1x2, tx2) - (max(b1x1, tx1))));
    int truck_Y1_Intersect = max(0, (min(b1y2, ty2) - (max(b1y1, ty1))));

    int truck_X2_Intersect = max(0, (min(b2x2, tx2) - (max(b2x1, tx1))));
    int truck_Y2_Intersect = max(0, (min(b2y2, ty2) - (max(b2y1, ty1))));

    //cout << (truck_X1_Intersect * truck_Y1_Intersect) - (truck_X2_Intersect * truck_Y2_Intersect)  << "\n";

    cout << totalArea - (truck_X1_Intersect * truck_Y1_Intersect) - (truck_X2_Intersect * truck_Y2_Intersect);
    return 0;
}
 */