/*
#include <iostream>
#include <algorithm>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=987
typedef long long ll;
typedef pair<int, int> pairs;

int N, K;

int main(){
    //freopen("word.in","r",stdin);
    //freopen("word.out","w",stdout);

    cin >> N >> K;
    string s, totalS, totalPrintS;

    for(int i = 0; i < N; ++i){
        cin >> s;
        totalS.append(s);

        if(totalS.length() <= K){
            totalPrintS.append(s);
            totalPrintS.append(" ");

        }
        else{
            for(int i = 0; i < totalPrintS.length()-1; ++i){
                cout << totalPrintS[i];
            }
            totalS.clear();
            totalPrintS.clear();
            cout << '\n';
            totalS.append(s);
            totalPrintS.append(s);
            totalPrintS.append(" ");
        }
    }
    for(int i = 0; i < totalPrintS.length()-1; ++i){
        cout << totalPrintS[i];
    }
    return 0;
}
*/