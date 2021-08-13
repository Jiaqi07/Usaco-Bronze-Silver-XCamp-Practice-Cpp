/*
#include <iostream>
//Date Done: 8/5/2021 at 5:41PM
//http://www.usaco.org/index.php?page=viewproblem2&cpid=760
//https://www.youtube.com/watch?v=94DIkwRQHXc&t=923s
using namespace std;

int main()
{
    //freopen("shuffle.in","r",stdin);
    //freopen("shuffle.out","w",stdout);

    int N;
    cin >> N;

    int shufflePattern[101] = {0};
    int ID[101] = {0};

    for(int i = 0; i < N; ++i){
        cin >> shufflePattern[i];
    }

    for(int i = 0; i < N; ++i){
        cin >> ID[i];
    }

    int newID[101] = {0};

    for(int i = 0; i < 3; ++i){ //Do it 3 times
        for(int j = 0; j < N; ++j){ //Backward Shuffling
            newID[j] = ID[shufflePattern[j] - 1];
        }
        for(int j = 0; j < N; ++j){ //Set old array to new
            ID[j] = newID[j];
        }
    }

    for(int i = 0; i < N; ++i){
        cout << newID[i] << "\n";
    }

    return 0;
}*/