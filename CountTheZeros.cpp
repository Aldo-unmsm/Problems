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
    int countZeroes(int arr[],int n){
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==1)break;
            count++;
        }
        return count;
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
        auto ans=ob.countZeroes(arr,n);
        cout<<ans<<endl;
    }
return 0;}