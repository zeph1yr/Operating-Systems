#include <bits/stdc++.h>
using namespace std;

//Thanks @Shrey29ansh for the feedback to add comments explaining this code

int main()
{
    int tc;
    cout<<"Enter the number of elements:";
    cin>>tc;

    // Vectors in C++ are dynamic arrays i.e. They have the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
    vector<int>vi;
    vector<int>tat;
    vector<int>wait;
    vector<pair<int,int>> vec; // Here Vector pair is just like 2-D array

    float sum=0;
    int At,Bt,c=0; // At - Arrival Time , Bt - Burst Time

    for(int i=0;i<tc;i++)
    {
        cin>>At>>Bt;
        vec.push_back(make_pair(At,Bt)); // Notice Arrival Time is the first instance of the pair
        
        
        //This is because of the property of sort() STL function 
                                        //In case of vector pairs, sort function will sort according to first element of the pair                                     
    }
    sort(vec.begin(),vec.end());   // So final vector will be sorted according to Arrival time in ascending order with their burst time as second elemnt of the pair

    
    for(auto it:vec) // Range-based for loop in C++ is added since C++ 11, where we dont have to make iterator and stuff to iterate over vectors
    {                   // This is just like for(int i=0;i<n;i++)vec[i]
        At=it.first;       // .first lets us access the first element of the pair, Arrival Time here
        Bt=it.second;
        
        
        
        vi.push_back(Bt+c); // Vi is completion time, = Burst Time + c ( Constant that stores how long the process has took before this task)
        int temp=Bt+c-At;
        tat.push_back(temp); // Turn around Time, temp = Burst time + c - Arrival time
        wait.push_back(temp-Bt); // Waiting Time
        sum+=temp-Bt; // Total sum to calculate average completion time
        c=c+Bt;
    }

    cout<<"Completion time | Turn around Time | Waiting Time"<<endl;
    for(int i=0;i<tc;i++)cout<<vi[i]<<"       |              "<<tat[i]<<"       |             "<<wait[i]<<endl;

    cout<<endl<<sum/tc<<endl;

}

//Edit - Removed unnnecessary parts, added comments
