#include <iostream>

using namespace std;

int min(int x[], int N)
{
    int min=x[0];
    for(int i=0;i<N;i++)
    {
        if(min<x[i])
            min=min;
        else
            min=x[i];
    }
    return min;
}

int max(int x[],int N)
{
    int max=x[0];
    for(int i=0;i<N;i++)
    {
        if(max>x[i])
            max=max;
        else
            max=x[i];
    }
    return max;
}

int min2(int m, int n)
{
    if(m>n)
        return n;
    else
        return m;
}

int main()
{
    int m,n;
    cout<<"enter the two natural number\n"; cin>>m>>n;

    int* N;
    N = new int[min2(m,n)];
    int j=0;

    for(int i=1;i<=min2(m,n);i++)
    {
        if(m%i==0 && n%i==0){
            N[j]=i;
            j++;
        }
    }
    int gcd = max(N,j);
    cout<<"GCD of two natural number "<<m<<" and "<<n<<" is "<<gcd<<endl;

    delete[] N;
    return 0;
}
