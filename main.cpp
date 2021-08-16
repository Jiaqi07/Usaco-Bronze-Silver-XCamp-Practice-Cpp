//http://www.usaco.org/index.php?page=viewproblem2&cpid=1107 Started: 11:28pm 7/31/2021
/*Farmer John's cows are excited to learn that Chinese New Year was recently celebrated, ushering in the year of the Ox, always a bovine favorite.
As we know, the zodiac animals for Chinese calendar years follow a 12-year cycle: Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig, Rat, and then Ox again. Satisfied

Bessie the cow is proud to say she was born in a year of the Ox, many years ago. Her friend Elsie wants to know how many years apart from Bessie she was born, and hopes you can help her deduce this by looking at relationships between the birth years of several cows on the farm.
Bessie always Ox - Satisfied

INPUT FORMAT (input arrives from the terminal / stdin):
The first line of input contains an integer N (1≤N≤100). Each of the next N lines contains an 8-word phrase specifying the relationship between the birth years of two cows. It is of the form
"Mildred born in previous Dragon year from Bessie", or "Mildred born in next Dragon year from Bessie"

The 4th word is either "previous" or "next". For example, if the phrase is "Mildred born in previous Dragon year from Bessie", then Mildred's year of birth was the Dragon year closest to and strictly before (not equal to) Bessie's birth year.

OUTPUT FORMAT (print output to the terminal / stdout):
Please output the number of years by which Bessie and Elsie's birth years differ. It is guaranteed that this number can be determined by the input given.

SAMPLE INPUT:
4
Mildred born in previous Dragon year from Bessie
Gretta born in previous Monkey year from Mildred
Elsie born in next Ox year from Gretta
Paulina born in next Dog year from Bessie

SAMPLE OUTPUT:
12
In the input above,

Elsie was born 12 years before Bessie.
Mildred was born 9 years before Bessie.
Gretta was born 17 years before Bessie.
Paulina was born 9 years after Bessie.*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;


int main() {
    int n;
    string whoAInput, prevPostInput, yearInput, whoBInput, trash;

    cin >> n;

    string *whoNew, *preOrPost, *whatYear, *whoOld;
    whoNew = new string[n];
    preOrPost = new string[n];
    whatYear = new string[n];
    whoOld = new string[n];

    map<string, int> cowHistTotalDist;
    cowHistTotalDist["Bessie"] = 0;
    map<string, int> cowHistIndex;
    cowHistIndex["Bessie"] = 0;

    string afterAnimalYears[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
    string beforeAnimalYears[12] = {"Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox"};

    for(int i = 0; i < n; ++i){
        cin >> whoAInput >> trash >> trash >> prevPostInput >> yearInput >> trash >> trash >> whoBInput;
        whoNew[i] = whoAInput;
        preOrPost[i] = prevPostInput;
        whatYear[i] = yearInput;
        whoOld[i] = whoBInput;
    }

    for(int i = 0; i < n; ++i){
        if(preOrPost[i] == "previous"){
            int distanceYear = 12 - distance(beforeAnimalYears, find(beforeAnimalYears, beforeAnimalYears + 12, whatYear[i]));

        }
        else if(preOrPost[i] == "next"){
            int index = distance(afterAnimalYears, find(afterAnimalYears, afterAnimalYears + 12, whatYear[i]));

            if(cowHistIndex[whoOld[i]] >= index){
                int val = index + cowHistTotalDist[whoOld[i]];
                cowHistTotalDist[whoNew[i]] = val;
                cowHistIndex[whoNew[i]] = index;
            }
        }
    }
}
*/