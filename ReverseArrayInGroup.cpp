#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
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
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        stack<int> S;
        for(int i=0;i<n;i++){
            if(S.size()<k){
                S.push(A[i]);
            }else{
                while(!S.empty()){
                    cout<<S.top()<<" ";
                    S.pop();
                }
                S.push(A[i]);
            }
        }
        while(!S.empty()){
            cout<<S.top()<<" ";
            S.pop();
        }
        cout<<endl;
    }
return 0;}
