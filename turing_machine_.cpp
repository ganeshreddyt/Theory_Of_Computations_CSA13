// turing machine processing 0n1n2n

#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cout<<"Enter a string :";
  cin>>str;

  int ai = 0, bi = find(str.begin(), str.end(), '1') - str.begin();
  int ci = find(str.begin(), str.end(), '2') - str.begin();

  int al = bi, bl = ci, cl = str.length();
  cout<<endl;

  while(1)
  {
    if(ai < al) str[ai++] = 'A'; else break;
  	cout<<str<<endl;
  	if(bi < bl) str[bi++] = 'B'; else break;
  	cout<<str<<endl;
  	if(ci < cl) str[ci++] = 'C'; else break;
  	cout<<str<<endl;
  }

return 0;
}
