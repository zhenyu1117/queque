#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
stack <long long int >a;
int maxn=1000;
int main()
{
	int n;
	while(a.size()) a.pop();
	while(scanf("%d",&n)!=EOF)
	{
		long long int sum=0;
		long long int x;
		cin>>x;
		a.push(x);
		for(int i=1;i<n;i++)
		{
			cin>>x;
			while(a.top()<=x&&!a.empty())
				a.pop();
			sum+=a.size();
			a.push(x);
		}
		cout<<sum<<endl;
	}
	return 0;
 
}

