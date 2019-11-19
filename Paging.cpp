#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,d,x,f,n;
    vector<int>page,frame;
    cout<<"Enter p of logical address: ";
    cin>>p;
    cout<<"Enter d of logical address: ";
    cin>>d;
    int page_nums = pow(2,p);

    cout<<"Enter page table entries:"<<endl;

    for(int i=0;i<page_nums;i++)
    {
        cin>>x;
        page.push_back(x);
    }

    cout<<"Enter f of physical address"<<endl;
    cin>>f;

    int frame_nums = pow(2,f);

    cout<<"Enter memory entry"<<endl;

    for(int i=0;i<frame_nums;i++)
    {
        cin>>x;
        frame.push_back(x);
    }

    while(1)
    {
        cout<<"Enter Page no."<<endl;
        cin>>n;
        if(n==-1)break;
        if(page[n]==-1){cout<<"Page does not have any frame"<<endl;}
        else
        {
            cout<<frame[page[n]-1]<<endl;
        }
    }

}
