/*
#include<iostream>
#include <map>
using namespace std;

long long n, a[100005], s=0, h;
map<long long, long long> m, p;

int call(long long sum, int pos, int fl){
    if(sum>h || pos==n || pos<0)  return 0;
    if(m[h-sum])  return 1;

    m[a[pos]]--;
    int b = call(sum+a[pos],pos+ fl*1, fl);
    m[a[pos]]++;

    return b;
}

int main(){
    cin >> n;

    m[0]= 1;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        m[a[i]]++;
        p[a[i]]++;
        s+= a[i];
    }

    if(s&1){
        puts("NO");
        return 0;
    }

    h= s/2;

    if(call(0,0,1) || call(0,n-1,-1))
        puts("YES");
    else
        puts("NO");
}
 */