#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the two integers";
    cin>>a>>b;
    
    int N=a*b;
    
    for(int i=1;i<=N;i++)
    {
        if(i%a==0 && i%b==0){
            cout<<"LCM of two integers "<<a<<" and "<<b<<" is "<<i<<endl;
            break;
        }
    }
    
    return 0;
}
