  #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n+1];
        arr[0]=INT_MIN;
        bool issort=true;
        for(int i=1;i<=n;i++){cin>>arr[i];
        if(arr[i]<arr[i-1])issort=false;}

        if(k>1 || issort)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 }