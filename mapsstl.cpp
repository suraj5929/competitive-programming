Skip to content

Search or jump to…

Pull requests
Issues
Marketplace
Explore

@suraj5929
Learn Git and GitHub without any code!
Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.


1
0 0 RushiG02/My_Programs
 Code  Issues 0  Pull requests 0  Projects 0  Wiki  Security  Insights
My_Programs/Maps.cpp
@RushiG02 RushiG02 Create Maps.cpp
dc2de83 7 days ago
49 lines (42 sloc)  807 Bytes

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q,t,mk;
    string nm;
    map<string,int>m;
    cin>>q;
    while(q){
        cin>>t;
        if(t==1){
            cin>>nm>>mk;
        }
        else {
        cin>>nm;
        }
        switch(t){
            case 1:
            if ( m.find(nm) == m.end() ) {
  m.insert(make_pair(nm,mk));
}           else {
  m[nm]+=mk;
}

            break;
            case 2:
            m.erase(nm);
            break;
            case 3:
            cout<<m[nm]<<endl;
            break;
        }
        q--;
    }
    return 0;
}



© 2019 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
