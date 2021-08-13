/*
//http://www.usaco.org/index.php?page=viewproblem2&cpid=1084

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//Finished on 7/28-30/2021 at 10:22PM, Friday, Michael's Dad came and took dog away 2 weeks till school o>
int main() {
    int n, x, odd = 0, even = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x % 2 == 0){ //If Even
            ++even;
        }
        else if(x % 2 == 1){ //If Odd
            ++odd;
        }
    }
    //cout << "Odd: "  << odd << ", Even: " << even <<"\n";

    int count = 0, index = 0;

    while(odd != 0 || even != 0){
        if(index % 2 == 0){ // Even
            if(odd == 1 && even == 0){
                --count;
                break;
            }
            if(odd == 3 && even == 0){
                count += 2;
                break;
            }

            if(even == 0){
                odd -= 2;
            }
            else{ //Still a even left to fill in
                --even;
            }
        }
        else if(index % 2 == 1){ //odd
            if(odd == 0){
                break;
            }
            else{
                --odd;
            }
        }
        //cout << odd << " " << even << " " << count << "\n";
        ++count;
        ++index;
    }
    cout << count;
}

WORKING SOLUTION - THIS WAS THE SOLUTION ON USACO WEBSITE
#include <iostream>
using namespace std;

int main()
{
    int Odd = 0, Even = 0, N, x;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> x;
        if (x % 2 == 0){ //Even
            Even++;
        }
        else { //Odd
            Odd++;
        }
    }
    //EVERYTHING ABOVE IS SETUP FOR PROBLEM SOLVING DOWN BELOW

    while (Odd > Even) {
        Odd -= 2;
        ++Even;
    }
    if (Even > Odd+1){
        Even = Odd+1;
    }
    cout << Even + Odd << "\n";
}
*/
