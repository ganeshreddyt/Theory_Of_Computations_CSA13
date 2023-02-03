#include<bits/stdc++.h>
using namespace std;

int main(){
 string str;
 cout<<"Enter string :";
 cin>>str;
 string sub = "101";

 if(!all_of(str.begin(), str.end(), [](char ch){
			return ch == '1' || ch == '0';
			}))
	    cout<<"Invalid string"<<endl;

 else if(search(str.begin(), str.end(), sub.begin(), sub.end()) != str.end()){
	cout<<"Pattern 101 has found"<<endl;
	cout<<"Accepted"<<endl;
 }
.
 else{
	cout<<"Pattern 101 has not found"<<endl;
	cout<<"Not Accepted"<<endl;
 }

return 0;
}
