#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    int A[6][8];
    
    srand((unsigned int)time(NULL));
    
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<8;j++)
        {
            A[i][j]=rand()%999999+1;
            if(trunc(log10(A[i][j]))==0)
                cout<<"00000"<<A[i][j]<<'\t';
            else if(trunc(log10(A[i][j]))==1)
                cout<<"0000"<<A[i][j]<<'\t';
            else if(trunc(log10(A[i][j]))==2)
                cout<<"000"<<A[i][j]<<'\t';
            else if(trunc(log10(A[i][j]))==3)
                cout<<"00"<<A[i][j]<<'\t';    
           else if(trunc(log10(A[i][j]))==4)
                cout<<'0'<<A[i][j]<<'\t';
           else if(trunc(log10(A[i][j]))==5)
                cout<<A[i][j]<<'\t';                                                                                   
        }
        cout<<'\n';
    }
    
    return 0;
}
