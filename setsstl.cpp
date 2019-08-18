#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
 set<int>s;
 int t,x,y,a,b,c;
   cin>>t;
for(int i=0;i<t;i++){
    cin>>y>>x;
    switch(y){
        case 1:
           
            s.insert(x);
            break;
        case 2:
            
            s.erase(x);
            break;
        case 3:
            
            cout << (s.find(x) == s.end() ? "No\n" : "Yes\n");
            break;


    }
}
    return 0;
}



