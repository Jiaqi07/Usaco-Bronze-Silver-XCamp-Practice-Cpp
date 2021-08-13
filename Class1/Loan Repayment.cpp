/*


//http://www.usaco.org/index.php?page=viewproblem2&cpid=858
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N, K, M;



int main2(){

    //freopen("convention.in","r",stdin);
    //freopen("convention.out","w",stdout);

    cin >> N >> K >> M;

    int left = 0, right = cows[N-1];

    while(left < right){
        int middle = (left+right)/2;

        if(satisfyBus(middle)){
            //right = middle-1;
            right = middle;
        }
        else{
            left = middle+1;
        }
    }

    cout << left;
    return 0;
}

 */