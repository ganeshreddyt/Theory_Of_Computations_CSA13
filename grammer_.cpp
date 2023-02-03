// checking for existing a grammer ir not

#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cout<<"Enter string :";
  cin>>str;


  if(!all_of(str.begin(), str.end(), [](char ch){
			return ch != '0' || ch != '1';
			}))
	cout<<"Invalid String !..."<<endl;
  else if(str[0] == '0' && str.back() == '1')
	cout<<"Accepted"<<endl;
  else
	cout<<"Not Accepted"<<endl;

return 0;
}
