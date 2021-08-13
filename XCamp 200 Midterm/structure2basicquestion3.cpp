/*
#include <iostream>
#include <vector>
#include <algorithm>
 #include <string>
using namespace std;

struct node {
    int a;
    int b;
};

bool scoreComp(node first, node second) {
    int firstA = first.a;
    int firstB = first.b;
    int secondA = second.a;
    int secondB = second.b;

    if (firstA < secondA || firstA == secondA && firstB < secondB) {
        return true;
    }
    return false;
}

int main() {
    int n, x, y;
    cin >> n;

    node s[1001];

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;

        s[i].a = x;
        s[i].b = y;
    }

    sort(s,s+n, scoreComp);

    for (int i = 0; i < n; ++i) {
        cout << s[i].a << " " << s[i].b << "\n";
    }
}
 */