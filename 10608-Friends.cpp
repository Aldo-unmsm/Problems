#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cstdlib>
#include <bitset>
#include <set>
#include <map>
#include <iterator>
using namespace std;
#define ll long long
#define ull unsigned long long
vector <int> v(10);
int find(int n){
    return n==v[n]?n:find(v[n]);
}
void Union(int a,int b){
    v[find(a)]=find(b);
}
int main(){
    int a,b;
    for(int i=0;i<10;i++)v[i]=i;
    while(cin>>a>>b){
        if(a==0 and b==0)break;
        Union(a,b);
        for(int i=0;i<10;i++)cout<<i<<" "<<v[i]<<endl;
    }
    for(int i=0;i<10;i++)cout<<i<<" "<<v[i]<<endl;
return 0;}