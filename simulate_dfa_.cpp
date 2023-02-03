// program to simulate a DFA

#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int f = 2, q0 = 0, nxt = 0, trans[][2] = {{1, 3}, {1, 2}, {1, 2}, {3, 3}};
char input[] = {'a', 'b'};
bool invalid = false;

// function to perform simulation of dfa
void simulate_dfa(string str)
{
	if(str.empty()) return;

	else if(str[0] == input[0])
		nxt = trans[q0][0];
	else if(str[0] == input[1])
	    nxt = trans[q0][1];
	else{
		invalid = true;
		return;
	}
	q0 = nxt;

	simulate_dfa(str.substr(1));
}

int main(){
	cout<<"Enter string :";
	string str;
	cin>>str;

    simulate_dfa(str);

   if(invalid)
		cout<<"!In valid input...."<<endl;
	else if(q0 == f)
		cout<<"Input String is Accepted..."<<endl;
	else
		cout<<"Input String is not Accepted..."<<endl;
	//cout<<q0<<' '<<nxt<<' ';
	cout<<trans[q0][nxt];

return 0;
}
