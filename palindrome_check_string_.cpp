#include<bits/stdc++.h>
using namespace std;

int main(){
  string str, s;
  cout<<"Enter string :";
  cin>>str;
  s.resize(str.length());
  reverse_copy(str.begin(), str.end(), s.begin());

  if(!all_of(str.begin(), str.end(), [](char ch){
			return ch == '0' || ch == '1';
			}))
	cout<<"Invalid String !..."<<endl;
  else if(s.compare(str) == 0)
	cout<<"String is palindrome\nAccepted"<<endl;
  else
	cout<<"String is not a palindrome\nNot Accepted"<<endl;

return 0;
}
