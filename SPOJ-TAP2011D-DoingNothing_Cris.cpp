//============================================================================
// Name        : TAP2011D-DoingNothing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long int N, M;
	int cap, i;
	long long int minutos;
	cin>>N>>M;
	while(N!=-1){
		minutos=0;
		for(i=N;i>0;i--){
			cin>>cap;
			minutos+=cap*M*i;
		}
		cout<<minutos<<endl;
		cin>>N>>M;
	}
	return 0;
}

