#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int logic(int A[],int B[],int n)
{
    int x=true;
    for(int i=0;i<n;i++){
        x=x&&(A[i] != B[i]);
    }
    
    return x; //true:1, false:0
}

int main()
{
    int A;
    int* pR;
    int* pZ;
    cout<<"enter the natural number larger than 1\n";
    cin>>A;
    cout<<"It'll find the prime numbers between "<<1<<" and "<<A<<endl;
    int N;
    /*pR = new int[N];
    pZ = new int[N];*/


    fstream out;
    out.open("prime_number.txt");
    
    for(int i=2;i<=A;i++)
    {
		N = trunc(sqrt(i)) + 1;
		pR = new int[N];
		pZ = new int[N];
        for(int j=0;j<=N-2;j++)
        {
            pR[j] = i%(j+2);
        }
        for(int j=0;j<=N-2;j++)
        {
            pZ[j] = 0;
        }
        int x=logic(pR,pZ,N-2);
        
        if(x==1){
            cout<<i<<" is the prime number\n";
            out<<i<<" is the prime number\n";
        }
		delete[] pR;
		delete[] pZ;
    }
    
    out.close();
    /*delete[] pR;
    delete[] pZ;*/
    
    return 0;
}
