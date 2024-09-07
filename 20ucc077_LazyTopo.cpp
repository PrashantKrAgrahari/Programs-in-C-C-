//Name Prashant Agrahari                       Roll No. 20UCC077
#include<bits/stdc++.h>
using namespace std;
void fun(vector<int> &indegree,vector<int> adj[],int sr){
    for(auto it: adj[sr]){
       // cout<<it<<endl;// cout<<it<<endl;
        indegree[it]--;
    }
}
int main(){
    cout<<"NUMBER OF VERTICES"<<endl;
    int n;
    cin>>n;
    cout<<"NUMBER OF EDGES"<<endl;
    int e;
    cin>>e;
    vector<int> indegree(n);
    for(int i=0;i<n;i++){
        indegree[i]=0;
    }
    vector<int> adj[n];
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        indegree[b]++;
        adj[a].push_back(b);
    }
    // for(int i=0;i<n;i++){
    //     cout<<i<<" "<<indegree[i]<<endl;
    // }
    int count=0;
    int zero;
    
    while(count<n){
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                 cout<<i<<" ";
                indegree[i]=-1;
                count++;
                
                fun(indegree,adj,i);
            }
        }
    }
    
    
return 0;}