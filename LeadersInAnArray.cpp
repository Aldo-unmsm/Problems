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
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        stack<int> S;
        int mayor=A[N-1];
        S.push(mayor);
        for(int i=N-2;i>=0;i--){
            if(A[i]>=S.top()){
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