/*
#include <iostream>
#include <algorithm>
#include <string>
//Date Done: 8/6/2021 at 12:13pm
//http://www.usaco.org/index.php?page=viewproblem2&cpid=664
using namespace std;

int main() {
    //freopen("blocks.in","r",stdin);
    //freopen("blocks.out","w",stdout);

    int N;
    string front, back;
    cin >> N;

    int finalAlphabet[26] = {0};

    for(int i = 0; i < N; ++i){
        int alphabetFront[26] = {0};
        int alphabetBack[26] = {0};

        cin >> front >> back;

        for(char j : front){
            ++alphabetFront[j - 'a']; //Convert to an index using ascii
        }
        for(char j : back){
            ++alphabetBack[j - 'a']; //Convert to an index using ascii
        }

        for(int j = 0; j < 26; ++j){
            if(alphabetFront[j] >= alphabetBack[j]){ //Get the max needed blocks of each word
                finalAlphabet[j] += alphabetFront[j];
            }
            else{
                finalAlphabet[j] += alphabetBack[j];
            }
        }
    }

    for(int i : finalAlphabet){
        cout << i << "\n";
    }

    return 0;
}
 */