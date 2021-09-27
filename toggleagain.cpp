#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
    int i,j;
    int count=0;
    int count1=1;
    for(i=2;i<=num;i++)
    {    
         
    	for(j=2;j<=i;j++)
    	{
    		if(i%j==0)
			{
			
			count=count+1;	
			}
		}
		if(count%2==0)
		{
			count1=count1+1;
		}
		count=0;
	}
	cout<<count1<<endl;
}
