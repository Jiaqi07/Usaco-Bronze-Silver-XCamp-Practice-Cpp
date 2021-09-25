/* REDID IT TO UNDERSTAND AGAIN
#include <iostream>
#include <algorithm>
using namespace std;
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1109
typedef long long ll;

int main(){
    int N;
    cin >> N;

    string s;

    for(int i = 0; i < N; ++i){
        cin >> s;
        int dir = 0;

        for(int j = 0; j < s.length()-1; ++j){
            int index = j;

            if(s[index] == 'N'){
                ++index;
                if(s[index] == 'E'){
                    ++dir;
                }
                if(s[index] == 'W'){
                    --dir;
                }
            }
            else if(s[index] == 'E'){
                ++index;
                if(s[index] == 'S'){
                    ++dir;
                }
                if(s[index] == 'N'){
                    --dir;
                }
            }
            else if(s[index] == 'S'){
                ++index;
                if(s[index] == 'W'){
                    ++dir;
                }
                if(s[index] == 'E'){
                    --dir;
                }
            }
            else if(s[index] == 'W'){
                ++index;
                if(s[index] == 'N'){
                    ++dir;
                }
                if(s[index] == 'S'){
                    --dir;
                }
            }
        }
        if(dir > 0){
            cout << "CW\n";
        }
        else if(dir < 0){
            cout << "CCW\n";
        }
    }

}
*/