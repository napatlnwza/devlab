#include<bits/stdc++.h>
using namespace std;
int main(){
	string A;
	int Count;
	getline(cin,A);
	for(int i=0;i<A.length();i++){
		char Test=toupper(A[i]);
		if(Test==' ') Count+=3;
		else if(Test=='A' or Test=='E' or Test=='I' or Test=='O' or Test=='U') Count+=1;
		else Count+=2;
	}
	cout<<Count;
	return 0;
}