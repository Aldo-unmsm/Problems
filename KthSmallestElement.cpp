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
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        cin>>k;
        sort(A,A+n);
        cout<<A[k-1];
        cout<<endl;
    }
return 0;}