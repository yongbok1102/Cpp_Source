#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum=0;
    int N;
    cin>>N;
    
    for(int i=0;i<=N;i++)
    {
        sum+=pow(0.5,i);
    }
    cout.precision(15);
    cout<<"¥Ò_(i=0) ^(N) (2^(-i)) = "<<sum<<endl;
    
    return 0;

}
