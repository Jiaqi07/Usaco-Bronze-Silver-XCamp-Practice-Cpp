/*
#include <iostream>
using namespace std;

// Recursive function to solve Tower
// of Hanoi puzzle
void hanoi(int n, char from_rod, char to_rod, char aux_rod1, char aux_rod2){
    if (n == 0){
        return;
    }
    if (n == 1){
        cout << "\n Move disk" <<n << " from rod " << from_rod <<" to rod "<<to_rod;
        return;
    }
    hanoi(n - 2, from_rod, aux_rod1, aux_rod2, to_rod);
    cout << "\n Move disk" <<n-1 << " from rod " << from_rod <<" to rod "<<aux_rod2;
    cout << "\n Move disk" <<n << " from rod " << from_rod <<" to rod "<<to_rod;
    cout << "\n Move disk" <<n-1 << " from rod " << aux_rod2 <<" to rod "<<to_rod;
    hanoi(n - 2, aux_rod1, to_rod, from_rod, aux_rod2);
}

int main(){
    int n = 4; // Number of disks

    // A, B, C and D are names of rods
    hanoi(n, 'A', 'D', 'B', 'C');
    return 0;
}
*/