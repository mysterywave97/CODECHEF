#include<bits/stdc++.h>
using namespace std;
bool dp[2501][2501];
main(){
	int t;
	cin>>t;
	for(int e=0;e<t;e++){
	 int n,k;
	 cin>>n>>k;
	 
	 for(int i=1;i<=n;i++)
	 	for(int j=1;j<=k;j++)
	 	dp[i][j]=0;
	 for(int i=1;i<=n;i++){
	 	int p; cin>>p;
	 	for(int j=1;j<=p;j++){
	 		int q; cin>>q;
	 		dp[i][q]=1;
		 }
	 }
	 /*for(int i=1;i<=n;i++){
	 	for(int j=1;j<=k;j++)
	 	cout<<dp[i][j]<<" ";
	 	cout<<"\n";
	 }*/
	 int count=0;
	 for(int p=1;p<=n;p++)
	 for(int q=p+1;q<=n;q++){
	 int flag=0;
	 for(int j=1;j<=k;j++){
	 	if(dp[p][j] || dp[q][j]);
	 	else{
	 		flag=1;
	 		break;
		 }
	 }
	 if(flag==0)
	 count++;
     }
     
     cout<<count<<"\n";
   }
}
