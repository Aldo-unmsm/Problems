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
int main(){
    int n,x;
    bool flag;
    queue<int> q;
    while(cin>>n){
        if(n==0)break;
        for(int i=1;i<n+1;i++){
            q.push(i);
        }
        cout<<"Discarded cards:";
        flag=false;
        while(q.size()>1){
            if(flag)cout<<",";
            x=q.front();
            cout<<" "<<x;
            q.pop();
            x=q.front();
            q.pop();
            q.push(x);
            flag=true;
        }
        cout<<"\nRemaining card: "<<q.front();
        q.pop();
        cout<<endl;
    }
return 0;}