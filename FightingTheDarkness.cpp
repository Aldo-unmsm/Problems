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
    int maxDays(int a[],int n){
        int maximo=0;
        for(int i=0;i<n;i++){
            if(a[i]>maximo){
                maximo=a[i];
            }
        }
        return maximo;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.maxDays(a,n);
        cout<<endl;
    }
return 0;}