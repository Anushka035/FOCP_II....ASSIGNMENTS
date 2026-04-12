#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int k;
	cin>>k;
	string bulbs;
	cin>>bulbs;
	for(int l=1;l<=n;l++){
		int count=0;
		int i=0;
		while(i<n){
			if(bulbs[i]=='1'){
			count++;
			i=i+l;}
		
		else{i=i+1;}
		}
		if(count<=k){
			cout<<l;
			return 0;
		}

	}
	
}