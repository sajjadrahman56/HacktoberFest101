#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     vector<int> v={1,2,4,5,6,8};
     vector<int> t;
     for(int i=v.size()-1;i>=0;i--)
     {
         t.push_back(v[i]);
     }
     cout<<"The array after reversal : "<<endl;
     for(int i=0;i<t.size();i++)
     {
         cout<<t[i]<<" ";
         
     }
 }
