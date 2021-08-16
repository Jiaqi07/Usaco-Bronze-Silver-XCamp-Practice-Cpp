/*
#include <iostream>
#include <algorithm>
#include <map>


using namespace std;

int main() {
    int N, x;
    cin >> N;

    map<int, int> counter;

    for(int i = 0; i < N; ++i){
        cin >> x;
        ++counter[x];
    }

    for(const auto& elem : counter){
        std::cout << elem.first << " " << elem.second << "\n";
    }

    return 0;
}
*/