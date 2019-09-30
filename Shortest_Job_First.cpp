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
        At=it.second;
        Bt=it.first;
        c=c+Bt;

        vi.push_back(c);
        int temp=c;
        tat.push_back(c);
        wait.push_back(c-Bt);
        sum+=temp-Bt;

    }

    cout<<"Completion time | Turn around Time | Waiting Time"<<endl;
    for(int i=0;i<tc;i++)cout<<vi[i]<<"       |              "<<tat[i]<<"       |             "<<wait[i]<<endl;

    cout<<endl<<sum/tc<<endl;

}
