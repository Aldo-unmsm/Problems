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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        int left[n],right[n];
        int total=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        left[0]=A[0];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],A[i]);
        }
        right[n-1]=A[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],A[i]);
        }
        for(int i=1;i<n-1;i++){
            total+=min(left[i],right[i])-A[i];
        }
        cout<<total<<endl;
    }
return 0;}