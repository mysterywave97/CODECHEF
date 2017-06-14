#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int e=0;e<t;e++){
		int n;
		cin>>n;
		long a[100001];
		for(int i=0;i<n;i++)
		cin>>a[i];
		long long total=0;
		int count=1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				count++;
			}
		    else{
				total=total+(count*(count+1))/2;
				count=1;
				if(i==n-1)
				total++;
			}
			if(a[i]>a[i-1] && i==n-1){
				total=total+(count*(count+1))/2;
			}
		//	cout<<"count="<<count<<"\n";
		}
		if(n==1)
		cout<<"1\n";
		else
		cout<<total<<"\n";
	}
	return 0;
}
