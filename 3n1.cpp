#include<iostream>
using namespace std;
int main(){
int a,b,ct,mct;


while(cin>>a>>b){

  unsigned  int a2,b2;
    a2=a<=b?a:b;
    b2=a<=b?b:a;
    ct=0;
    mct=0;
    for(int k=a2;k<=b2;k++){
      ct=0;
      int k2=k;
      while(k2!=1){

if(k2%2==1){



  k2=3*k2+1;

  ct++;
}

else{
  k2=k2/2;
  ct++;
}
}
ct++;
if(ct>mct) mct=ct;
}
cout<<a<<" "<<b<<" "<<mct<<"\n";
}
return 0;
}
