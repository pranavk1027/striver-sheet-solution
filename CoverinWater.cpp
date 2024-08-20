#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int curr=0;
        int max_streak=0;
int count=0;
        for(int i=0;i<n;i++){
            curr=0;
if(s[i]=='.'){
    while(s[i]=='.'){
        curr++;
        i++;
        count++;
    }
    max_streak=max(curr,max_streak);
   
}
if(max_streak>=3)break;

        }
        if(max_streak>=3)cout<<2<<endl;
        else {
cout<<count<<endl;
        }
    }
}