#include <iostream>
using namespace std;

int main()
{
	int M;
	cout<<"자연수의 개수를 입력하시오.\n"; cin>>M;
	int* pX;
	pX = new int[M];
	
	for(int i=0;i<M;i++)
	{
		cout<<i+1<<"번째 자연수를 입력하시오.\n"; cin>>pX[i];
	}
	
	int N=1;
	for(int j=0;j<M;j++)
	{
		N=N*pX[j];
	}
	
	for(int i=0;i<N;i++)
	{
		int Logic=1;
		for(int j=0;j<M;j++)
		{
			Logic=Logic&&((i+1)%pX[j]==0);
		}
		if(Logic==1)
		{
			cout<<M<<"개의 자연수 ";
			for(int k=0;k<M;k++)
			{
				cout<<pX[k];
				if(k<M-1)
					cout<<", ";
			}
			cout<<"의 최소공배수는 "<<i+1<<"입니다.\n";
			break;
		}
		Logic=1;
	}
	delete[] pX;
	return 0;
}
