#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector <int> boxes(n);
        for(int i = 0; i < n;i++)
            cin>>boxes[i];

        // logic
        if(k == 1 && !is_sorted(boxes.begin(), boxes.end()))
            cout<<"No";
        
        else
            cout<<"Yes";
    }
}