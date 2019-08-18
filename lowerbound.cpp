#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m,c,d;   
    cin>>m;
    vector <int>v; 
    for(int i=0;i<m;i++){
        cin>>c;
        v.push_back(c);
    }
    int q;
   cin>>q;
    for(int i=0;i<q;i++){
         cin>>d;
    vector<int> :: iterator low=lower_bound(v.begin(),v.end(),d);
    if(v[low-v.begin()]==d)
        cout<<"Yes"<<" "<<(low-v.begin()+1)<<endl;
    else
        cout<<"No"<<" "<<(low-v.begin()+1)<<endl;
    }
    return 0;
}
