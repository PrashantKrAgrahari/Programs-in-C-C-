//Name:Prashant Agrahari                                    Roll No. 20UCC077
#include<bits/stdc++.h>
using namespace std;
vector<int> v1;
void bfs(queue<int> &q,vector<bool> &visited,vector<int> adj[],unordered_map<int,int> &mymap){
    while(q.size()!=0){
    int a=q.front();
    v1.push_back(a);
    visited[a]=true;
    q.pop();
    for(auto it: adj[a]){
        if(visited[it]==false){
            mymap[it]--;
            if(mymap[it]==0){
               
                q.push(it);
            }
        }
        
    }
    }
}

int main(){
    cout<<"NUMBER OF VERTICES"<<endl;
    int n;
    cin>>n;
    vector<int> adj[n];
    cout<<"NUMBER OF EDGES"<<endl;
    int e;
    cin>>e;
    unordered_map<int,int> mymap;
    vector<bool> visited(n);
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        mymap[i]=0;
    }

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        mymap[b]++;
        adj[a].push_back(b);
    }
    
    queue<int> q;
    for(int i=0;i<n;i++){
        if(mymap[i]==0){
            q.push(i);
        }
    }
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            bfs(q,visited,adj,mymap);
        }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    
return 0;}