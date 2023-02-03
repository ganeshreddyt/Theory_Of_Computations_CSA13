 // check whether given grammer will follow the pattern 0n1m0n

#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Enter string :";
	string str;
	cin>>str;
    //cout<<count(str.begin(), find(str.begin(), str.end(), '1'), '0')<<endl;
    //cout<<count(str.rbegin(), find(str.rbegin(), str.rend(), '1'), '0')<<endl;

	if(!all_of(str.begin(), str.end(), [](char ch){
			return ch == '1' || ch == '0';
			}))
	    cout<<"Invalid string"<<endl;

	else if(count(str.begin(), find(str.begin(), str.end(), '1'), '0') ==
	        count(str.rbegin(), find(str.rbegin(), str.rend(), '1'), '0'))
	    cout<<"Accepted"<<endl;

	else
		cout<<"Not Accepted"<<endl;

return 0;
}
