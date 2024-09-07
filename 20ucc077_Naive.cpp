//Name- Prashant Agrahari                      Roll No. 20UCC077
#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b,vector<pair<int,int>> &v){
    set<int> s1;
    for(int i=0;i<v.size();i++){
        if(i!=a&&i!=b){
            int c=(v[b].second-v[a].second)*(v[i].first-v[b].first)-(v[i].second-v[b].second)*(v[b].first-v[a].first);
            if(c>0){
                s1.insert(1);
            }
            else if(c<0){
                s1.insert(-1);
            }
            else{
                s1.insert(0);
            }
        }
    }
        if(s1.size()==3){
            return false;
        }
        else if(s1.size()==2){
            for(auto it=s1.begin();it!=s1.end();it++){
                if(*it==0){
                    return true;
                }
            }
        }
        else if(s1.size()==1){
            return true;
        }
        
    
        
   return false; }



int main(){
cout<<"NUMBER OF POINTS IN CONVEX REGION"<<endl;
int n;
cin>>n;
vector<pair<int,int>> v;
cout<<"ENTER THE POINTS"<<endl;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    v.push_back(make_pair(a,b));
}
set<pair<int,int>> s;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j!=i){
            bool a=check(i,j,v);
            if(a){
                s.insert(make_pair(v[i].first,v[i].second));
                s.insert(make_pair(v[j].first,v[j].second));
            }
        }
    }
}
cout<<"BOUNDARY POINTS"<<endl;
for(auto it=s.begin();it!=s.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

return 0;}