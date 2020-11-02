#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>1)
	cout<<"2"<<" ";
	
	for (int i=5;i<=n && i%3!=0;i+=2){
		int x=0;
		
		for(int j=2;j<i;j++){
			if(i%j==0)
				x+=1;
			}
			
		if(x==0)
				cout<<i<<" ";	
		
	}
	return 0;
}
