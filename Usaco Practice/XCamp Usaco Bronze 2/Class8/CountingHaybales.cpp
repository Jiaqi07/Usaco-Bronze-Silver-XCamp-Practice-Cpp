/*
#include <iostream>
#include <algorithm>
//http://www.usaco.org/index.php?page=viewproblem2&cpid=666
using namespace std;

int N, Q;
int haybales[100001]; // 2 3 5 7
*/

/*int findBoundary(int x){
    if(haybales[0] > x) {
        return 0;
    }

    int lowest = 0;
    int highest = N-1;

    while(lowest < highest){
        int middle = (lowest + highest + 1)/2;
        if(middle <= x){
            lowest = middle;
        }
        else{
            highest = middle-1;
        }
    }
    return lowest+1;
}*/

/*int main(){
    ios_base::sync_with_stdio(0); //THESE LINES ARE JUST FOR XJOI IF PROBLEM ON USACO REMOVE THESE LINES
    cin.tie(0); //SAME AS LINE ABOVE CUZ XJOI BADD HAHAHA

    //freopen("haybales.in","r",stdin);
    //freopen("haybales.out","w",stdout);

    cin >> N >> Q;
    for(int i = 0; i < N; ++i){
        cin >> haybales[i];
    }
    sort(haybales, haybales + N); //Sort 2 3 7 5 to binary search

    int A, B;

    for(int i = 0; i < Q; ++i){
        cin >> A >> B;
        cout << abs(lower_bound(haybales, haybales+N, A) - upper_bound(haybales, haybales+N, B)) << "\n";
        // cout << findBoundary(B) - findBoundary(A-1)  << '\n';
    }
    return 0;
}
*/