#include <iostream>
#include <cstdlib>
#include <ctime>
#include "minmax.h"

using namespace std;

int main()
{
	double x,y;
	int itr;
	cout<<"Enter the iteration number\n";
	cin>>itr;
	int m=0;
	
	double xa=0; double xb=30;
	double ya=0; double yb=20;
	
	double* pX;
	double* pY;
	double* pF;
	pX = new double[itr];
	pY = new double[itr];
	pF = new double[itr];
	
	cout<<"Monte-Carlo optimization started.----------\n";
	
	srand((unsigned int)time(NULL));
	
	for(int i=0;i<itr;i++)
	{
		x = (xb-xa)*(double)rand()/RAND_MAX + xa;
		y = (yb-ya)*(double)rand()/RAND_MAX + ya;
		if(x + 2*y <=40 && 4*x + 3*y <= 120)
		{
			pX[m]=x;
			pY[m]=y;
			pF[m]=4*x + 5*y;
			cout<<m+1<<'|'<<pX[m]<<'\t'<<pY[m]<<'\t'<<pF[m]<<endl;
			m++;
		}
	}
	
	double res = max(pF,m);
	
	for(int i=0;i<m;i++)
	{
		if(pF[i]==res)
			cout<<"x="<<pX[i]<<" y="<<pY[i]<<" fmax="<<pF[i]<<endl;
	}
	
	delete[] pX; delete[] pY; delete[] pF;
	
	return 0;
}