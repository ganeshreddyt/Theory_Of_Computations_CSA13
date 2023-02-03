// simulation of push down automata for 0n1n
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout<<"Enter string :";
	cin>>str;

	if(!all_of(str.begin(), str.end(), [](char ch){
			return ch == '1' || ch == '0';
			}))
	    cout<<"Invalid string"<<endl;
    else{
		 string space(count(str.begin(), find(str.begin(), str.end(), '1'), '0') + 3, ' ');
		 int len = str.length();
		 string stk(1, '$');

         cout<<endl;
		 cout<<"Stack"<<"     "<<"Input"<<endl;
		 cout<<"======================"<<endl;

         for(int i = 0; i < len; i++)
		 {
		 	cout<<stk<<space<<str<<endl;
		    if(str[0] == '0'){
				space.pop_back();
				stk.push_back('0');
		    }
		    else{
				space.push_back(' ');
				stk.pop_back();
		    }
		    str = str.substr(1);

		    if(stk.empty()) break;
		 }

         cout<<stk<<space<<str<<endl;

		 if(stk.empty() || stk.length() > 1)
			cout<<"Not Accept"<<endl;
		 else     // stk.length() == 1 //i.e., '$' end of stack
			cout<<"Accept"<<endl;
    }

return 0;
}
