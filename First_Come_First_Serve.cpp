#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tc;
    cout<<"Enter the number of elements:";
    cin>>tc;

    vector<int>vi;
    vector<int>tat;
    vector<int>wait;
    vector<pair<int,int>> vec;

    float sum=0;
    int At,Bt,c=0;

    for(int i=0;i<tc;i++)
    {
        cin>>At>>Bt;
        vec.push_back(make_pair(Bt,At));
    }

    sort(vec.begin(),vec.end());

    for(auto it:vec)
    {
        At=it.first;
        Bt=it.second;
        vi.push_back(Bt+c);
        int temp=Bt+c-At;
        tat.push_back(temp);
        wait.push_back(temp-Bt);
        sum+=temp-Bt;
        c=c+Bt;
    }

    cout<<"Completion time | Turn around Time | Waiting Time"<<endl;
    for(int i=0;i<tc;i++)cout<<vi[i]<<"       |              "<<tat[i]<<"       |             "<<wait[i]<<endl;

    cout<<endl<<sum/tc<<endl;

}
