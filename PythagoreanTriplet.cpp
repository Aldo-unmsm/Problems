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
class Solution{
    public:
        bool checkTriplet(int arr[], int n){
            for(int i=0;i<n;i++){
                
            }
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans=ob.checkTriplet(arr,n);
        if(ans){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
return 0;}