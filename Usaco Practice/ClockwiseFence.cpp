/*
#include <iostream>
#include <algorithm>
//Date Done: 8/14/2021 at 1:53PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1109
//https://www.youtube.com/watch?v=qdeFxXGSGwQ&t=641s&ab_channel=Cararra
using namespace std;

//Converted my java solution to CPP

int main(){
    int N, count = 0;
    string s;
    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> s;
        for(int j = 0; j < s.length()-1; ++j){
            int index = j;
            if(s[index] == 'N'){
                ++index;
                if(s[index] == 'E'){
                    ++count;
                }
                if(s[index] == 'W'){
                    --count;
                }
            }
            else if(s[index] == 'E'){
                ++index;
                if(s[index] == 'S'){
                    ++count;
                }
                if(s[index] == 'N'){
                    --count;
                }
            }
            else if(s[index] == 'S'){
                ++index;
                if(s[index] == 'W'){
                    ++count;
                }
                if(s[index] == 'E'){
                    --count;
                }
            }
            else if(s[index] == 'W'){
                ++index;
                if (s[index] == 'N') {
                    ++count;
                }
                if (s[index] == 'S') {
                    --count;
                }
            }
        }
        if(count > 0){
            cout << "CW\n";
        }
        else{
            cout << "CCW\n";
        }
        count = 0;
    }
    return 0;
}
*/