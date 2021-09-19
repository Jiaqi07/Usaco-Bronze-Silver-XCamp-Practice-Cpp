/*
#include <iostream>
#include <algorithm>
using namespace std;
//Working solution 10/10, Single down the patterns to the greatest one
int main(){
    int n, s[101], f[101][101];
    cin >> n;

    for(int i = 0; i < n; i++){ //input
        for (int j = 0; j < i+1; ++j){
            cin >> f[i][j];
        }
    }

    for(int i = 0; i < n; ++i){ //Set up all the bottom values of the triangle
        s[i] = f[n - 1][i];
    }

    for(int i = n - 1; i > 0; --i){ //Up and down for triangle
        for(int j = 0; j < i; ++j){ //Gets rid of the one statement on the edge meaning 5 using sample input
            if(s[j] > s[j + 1]){ //Check which one is the greater one and add it onto the list
                s[j] = f[i - 1][j] + s[j];
            }
            else{
                s[j] = f[i - 1][j] + s[j+1];
            }
        }
    }

    for(int i = 0; i < n; ++i){
        cout << s[i] << " ";
    }

    cout << endl << s[0];
}
//Old Solution 7/10, attempt to simulate it for every pattern
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    int triangle[101][101] = {{0}};

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i+1; ++j){
            cin >> triangle[i][j];
        }
    }

    int sum, ans = -1e9;
    for(int i = n-1; i >= 0; --i){
        sum = triangle[n-1][i];
        int x = i;

        for(int j = n-2; j >= 0; --j){
            int y = j;
            if(triangle[y][x] > triangle[y][x-1]){
                sum += triangle[y][x];
            }
            else{
                sum += triangle[y][x-1];
                x -= 1;
            }
        }
        ans = max(ans, sum);

    }
    cout << ans;
    return 0;
}
*/
/*
Input:
7

3 8

8 1 0

2 7 4 4

4 5 2 6 5

30 21 10 10 5

 Output:
 30
 */