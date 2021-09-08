/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
//Started: 8/21/2021, 2:53PM
using namespace std;

typedef long long ll;

bool sortbysec(const tuple<int, int, int>& a, const tuple<int, int, int>& b){
    return (get<1>(a) < get<1>(b));
}

int main(){
    int N;
    cin >> N;

    vector<tuple<char, ll, ll>> cows;
    vector<int> answers;

    char dir;
    ll x, y;

    for(int i = 0; i < N; ++i){
        cin >> dir >> x >> y;
        cows.emplace_back(dir, x, y);
    }
    //sort(cows.begin(), cows.end(), sortbysec); //Can't do this cuz output sad

    for(int cow = 0; cow < N; ++cow){ //Each Tuple
        ll ans = 1e9+1;
        for(int i = 0; i < N; ++i){ //Compare Pair
            if(cow == i || get<0>(cows[cow]) == get<0>(cows[i])){ //Check for bad cases so we don't have to worry
                continue;
            }
            if((get<0>(cows[cow]) == 'E' && get<2>(cows[cow]) < get<2>(cows[i])) || (get<0>(cows[cow]) == 'N' && get<1>(cows[cow]) < get<1>(cows[i]))){ //Check for bad cases so we don't have to worry
                continue;
            }
            ll distX = abs(get<1>(cows[i]) - get<1>(cows[cow])); //Remeber if anything goes wrong try removing the abs AC!
            ll distY = abs(get<2>(cows[i]) - get<2>(cows[cow])); //^

            if(distX == distY){ //If it's equal, get out
                continue;
            }



            if(get<0>(cows[cow]) == 'E' && distX > distY){ //Y has to be smaller to stop the East cow
                bool doesCollide = false;
                for(int j = 0; j < N; ++j){ //Check if the i gets stopped before it stops cow
                    doesCollide = false;
                    if(cow == j || i == j || get<0>(cows[i]) == get<0>(cows[j])){ //Check for bad cases so we don't have to worry
                        continue;
                    }
                    if((get<0>(cows[i]) == 'E' && get<2>(cows[i]) < get<2>(cows[j])) || (get<0>(cows[i]) == 'N' && get<1>(cows[i]) < get<1>(cows[j]))){ //Check for bad cases so we don't have to worry
                        continue;
                    }
                    ll distXi = abs(get<1>(cows[j]) - get<1>(cows[i])); //Remember if anything goes wrong try removing the abs AC!
                    ll distYi = abs(get<2>(cows[j]) - get<2>(cows[i])); //^

                    if(distXi == distYi){ //If it's equal, get out
                        continue;
                    }

                    if(get<0>(cows[i]) == 'E' && distXi > distYi && distXi < distX){ //Y has to be smaller to stop the East cow
                        doesCollide = true;
                        break;
                    }

                    if(get<0>(cows[i]) == 'N' && distXi > distYi && distYi < distY){ //X has to be smaller to stop the North cows = false;
                        doesCollide = true;
                        break;
                    }
                }
                if(doesCollide){
                    continue;
                }
                cout << cow << " " << i << '\n';
                ans = min(ans, distX);
            }

            if(get<0>(cows[cow]) == 'N' && distX < distY){ //X has to be smaller to stop the North cows = false;
                bool doesCollide = false;
                for(int j = 0; j < N; ++j){ //Check if the i gets stopped before it stops cow
                    doesCollide = false;
                    if(cow == j || i == j || get<0>(cows[i]) == get<0>(cows[j])){ //Check for bad cases so we don't have to worry
                        continue;
                    }
                    if((get<0>(cows[i]) == 'E' && get<2>(cows[i]) < get<2>(cows[j])) || (get<0>(cows[i]) == 'N' && get<1>(cows[i]) < get<1>(cows[j]))){ //Check for bad cases so we don't have to worry
                        continue;
                    }
                    ll distXi = abs(get<1>(cows[j]) - get<1>(cows[i])); //Remember if anything goes wrong try removing the abs AC!
                    ll distYi = abs(get<2>(cows[j]) - get<2>(cows[i])); //^

                    if(distXi == distYi){ //If it's equal, get out
                        continue;
                    }

                    if(get<0>(cows[i]) == 'E' && distXi > distYi && distXi < distX){ //Y has to be smaller to stop the East cow
                        doesCollide = true;
                        break;
                    }

                    if(get<0>(cows[i]) == 'N' && distXi > distYi && distYi < distY){ //X has to be smaller to stop the North cows = false;
                        doesCollide = true;
                        break;
                    }
                }
                if(doesCollide){
                    continue;
                }
                ans = min(ans, distY);
            }
        }
        answers.push_back(ans);
    }

    //for(int i = 0; i < N; ++i){
    //    cout << get<0>(cows[i]) << ' ' << get<1>(cows[i]) << " " << get<2>(cows[i]) << '\n';
    //}

    for(ll cow : answers){
        if(cow == 1e9+1){
            cout << "Infinity\n";
        }
        else{
            cout << cow << "\n";
        }
    }

    return 0;
}
 */