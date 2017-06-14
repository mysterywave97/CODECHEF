#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
/*	vector<int> arr;
	int start=1;
	for(int i=0;i<=1000;i++){
		start=start+i;
		arr.push_back(start);
	}*/
	int t1=1;
	for(int e=0;e<t;e++){
	 int u,v;
	 cin>>u>>v;
	 long long int n=u+v;
	 cout<<1+(n*(n+1))/2+u<<"\n";
	 //cout<<arr[u+v]+u<<"\n";
    }
}
