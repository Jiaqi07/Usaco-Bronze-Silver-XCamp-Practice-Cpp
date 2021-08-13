/*
#include <iostream>
//Date Done: 8/9/2021 at 12:42PM
//http://usaco.org/index.php?page=viewproblem2&cpid=1060
//https://www.youtube.com/watch?v=OWAk2C3k_Ns Solution I used to help figure out what was average flower and fix my code PS I was checking whole array instead of range for average flower
using namespace std;

int main(){
    int N, count = 0;
    double sum = 0;
    cin >> N;

    int s[101] = {0};

    for(int i = 0; i < N; ++i){
        cin >> s[i];
    }

    for(int i = 1; i <= N; ++i){ //1-4 meaning flowers at a time and setup ranges
        for(int j = 0; j <= N-i; ++j){ //Find starting value of average so Flower I
            bool inPhotos = false;
            for(int k = j; k < j+i; ++k){ //Keep going till end of average so Flower J
                sum += s[k];
            }
            for(int k = j; k < j+i; ++k){
                if(sum/i == s[k]){
                    inPhotos = true;
                }
                if(inPhotos){
                    ++count;
                    break;
                }
            }

            sum = 0;
        }
    }
    cout << count;
    return 0;
}
 */