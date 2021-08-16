//http://www.usaco.org/index.php?page=viewproblem2&cpid=1107 Started: 11:28pm 7/31/2021, Finished: 9:59pm 8/4/2021
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int n;
map<string, int> oldCowDistance;
map<string, string> oldCowYear;

string prevAnimalYears[12] = {"Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox"};
string nextAnimalYears[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};

int getPrevIndex(string year){
    for(int i = 0; i < 12; ++i){
        if(prevAnimalYears[i].compare(year) == 0){
            return i;
        }
    }
}

int getNextIndex(string year){
    for(int i = 0; i < 12; ++i){
        if(nextAnimalYears[i].compare(year) == 0) {
            return i;
        }
    }
}

int findPrevious(string fromWho, string toYear){ //Bessies, then Mildered, then Dragon for first line of sample input
    int start = getPrevIndex(oldCowYear[fromWho])+1; //Ox: 11
    int end = getPrevIndex(toYear)+1; //Dragon: 2
    //cout << fromWho << " " << start << " " << end << " ";
    if(start > end){
        return -(start - end); //-9
    }
    else if(start < end){
        return -(12 - end + start); //-3
    }
    else if(start == end){
        return -12;
    }
}

int findNext(string fromWho, string toYear){ //Bessies, then Mildered, then Dragon for first line of sample input
    //12 is Ox and you don't want to include that
    int start = getNextIndex(oldCowYear[fromWho])+1; //Monkey: 8
    int end = getNextIndex(toYear)+1; //Ox: 1
    //cout << fromWho << " " << start << " " << end << " ";
    if(start < end){
        return end - start; //7
    }
    else if(start > end){
        return 12 - start + end; //5
    }
    else if(start == end){
        return 12;
    }
}

int main() {
    oldCowDistance["Ox"] = 0;
    oldCowYear["Bessie"] = "Ox";

    string whoAInput, prevPostInput, yearInput, whoBInput, trash;

    cin >> n;

    string *whoNew, *preOrPost, *whatYear, *whoOld;
    whoNew = new string[n];
    preOrPost = new string[n];
    whatYear = new string[n];
    whoOld = new string[n];

    for(int i = 0; i < n; ++i){ //Input
        cin >> whoNew[i] >> trash >> trash >> preOrPost[i] >> whatYear[i] >> trash >> trash >> whoOld[i]; //Mildred, Previous, Dragon, Bessie
    }

    for(int i = 0; i < n; ++i){
        if(preOrPost[i] == "previous"){
            oldCowDistance[whoNew[i]] = findPrevious(whoOld[i], whatYear[i]) + oldCowDistance[whoOld[i]];
            oldCowYear[whoNew[i]] = whatYear[i];
            //cout << oldCowDistance[whoNew[i]] << "\n";
        }
        else if(preOrPost[i] == "next"){
            oldCowDistance[whoNew[i]] = findNext(whoOld[i], whatYear[i]) + oldCowDistance[whoOld[i]];
            oldCowYear[whoNew[i]] = whatYear[i];
            //cout << oldCowDistance[whoNew[i]] << "\n";
        }
    }

    cout << abs(oldCowDistance["Elsie"]);
}
*/