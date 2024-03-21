#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> meetings(n);
    while(n--){
        cin>>meetings[n].second>>meetings[n].first;
    }
    sort(meetings.begin(), meetings.end());
    int res=1;
    int time = meetings[0].first;
    for(int i=1; i<meetings.size();i++){
        if(meetings[i].second>=time){
            res++;
            time= meetings[i].first;
        }
    }
    cout<<res;
}
