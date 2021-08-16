/*#include <iostream>
#include <vector>
#include <map>
#define ll long long
using namespace std;int main(){int N,X;cin>>N>>X;map<ll,int>s;vector<int>f;for(int i=0;i<N;++i){cin >> f[i];}ll p=0,a=0;s[0]=1;for(int i:f){p+=i;a+=s[p-i];++s[p];}cout<<a;}*/