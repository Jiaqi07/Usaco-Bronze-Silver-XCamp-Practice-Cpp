//http://www.usaco.org/index.php?page=viewproblem2&cpid=1083 SWITCHED TO CPP FOR THIS USACO CONTEST AND FROM THEN ON AROUND 7/24/2021
/*A little known fact about cows is that they have their own version of the alphabet, the "cowphabet". It consists of the 26 letters 'a' through 'z', but when a cow speaks the cowphabet, she lists these letters in a specific ordering that might be different from the order 'abcdefghijklmnopqrstuvwxyz' we are used to hearing.
To pass the time, Bessie the cow has been humming the cowphabet over and over again, and Farmer John is curious how many times she's hummed it.

Given a lowercase string of letters that Farmer John has heard Bessie say, compute the minimum number of times Bessie must have hummed the entire cowphabet in order for Farmer John to have heard the given string. Farmer John isn't always paying attention to what Bessie hums, and so he might have missed some of the letters that Bessie has hummed. The string you are told consists of just the letters that he remembers hearing.

INPUT FORMAT (input arrives from the terminal / stdin):
The first line of input contains the 26 lowercase letters 'a' through 'z' in the order they appear in the cowphabet. The next line contains the string of lowercase letters that Farmer John heard Bessie say. This string has length at least 1 and at most 1000.
OUTPUT FORMAT (print output to the terminal / stdout):
Print the minimum number of times Bessie must have hummed the entire cowphabet.
SAMPLE INPUT:
abcdefghijklmnopqrstuvwxyz
mood
SAMPLE OUTPUT:
3
In this example, the cowphabet is ordered the same as the normal alphabet.

Bessie must have hummed the cowphabet at least three times. It is possible for Bessie to have only hummed the cowphabet three times, and for Farmer John to have heard the letters in uppercase as denoted below.

abcdefghijklMnOpqrstuvwxyz
abcdefghijklmnOpqrstuvwxyz
abcDefghijklmnopqrstuvwxyz*/
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string alphabet, word;
    cin >> alphabet >> word;

    int curIndex = 0, count = 1;

    for(int i = 0; i < word.length(); ++i){ //1: M, 2: O, 3: O, 4: D
        while(word[i] != alphabet[curIndex]){
            if(curIndex >= alphabet.size()-1){
                curIndex = -1;
                count++;
            }
            ++curIndex;
        }
        ++curIndex;
        // cout << curIndex << " " << alphabet[curIndex] << "\n";
    }

    cout << count;
    return 0;
}
*/