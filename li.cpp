#include<iostream>
using namespace std;

void search(int array[],int len)
{
	int sp[1000]={0};
	int max=0,i=0;
	for(i=0;i<len;i++)
	{
		sp[array[i]-1]++;
	}
	for(i=0;i<1000;i++)
	{
		if(max<sp[i])
		{
			max=sp[i];
		}
	}
	for(i=0;i<1000;i++)
	{
		if(max==sp[i])
		{
			cout<<"Number:"<<i+1<<endl;
			cout << "Count:" << max << endl;
		}
	}
}

int main()
{
	int arrray[]={1,22,55,77,11,7,99,588,145,365,254,22,43,55,22};
	search(arrray,15);
}
 

