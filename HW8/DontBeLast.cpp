/*
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_set>
//http://usaco.org/index.php?page=viewproblem2&cpid=687
using namespace std;

template<typename A, typename B>
pair<B,A> flip_pair(const pair<A,B> &p)
{
    return pair<B,A>(p.second, p.first);
}

template<typename A, typename B>
multimap<B,A> flip_map(const map<A,B> &src)
{
    multimap<B,A> dst;
    transform(src.begin(), src.end(), inserter(dst, dst.begin()),
                   flip_pair<A,B>);
    return dst;
}

int main() {
    freopen("notlast.in","r",stdin);
    freopen("notlast.out","w",stdout);

    int N, x;
    string name;
    cin >> N;

    vector<int> s;
    vector<string> f;

    map<string, int> counter;

    counter["Bessie"] = 0, counter["Elsie"] = 0, counter["Daisy"] = 0, counter["Gertie"] = 0, counter["Annabelle"] = 0,  counter["Maggie"] = 0, counter["Henrietta"] = 0;


    for(int i = 0; i < N; ++i){
        cin >> name >> x;
        counter[name] += x;
    }

    bool go = true;
    multimap<int, string> flipped = flip_map(counter);
    unordered_set<int> a;

    for(const auto& elem : flipped){
        for(int i = 0; i < s.size(); ++i){
            if(elem.first == s[i]){
                go = false;
                break;
            }
        }
        if(go){
            s.push_back(elem.first);
            if(elem.first != 0){
                a.insert(elem.first);
            }
            f.push_back(elem.second);
        }
        go = true;
    }
    if(a.size() == 1 && N > 1){
        cout << "Tie";
    }
    else{
        cout << f[1];
    }
    return 0;
}
*/