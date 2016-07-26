#include <iostream>
using namespace std;

int main()
{
    int N;
    int Sum=0;
    
    cout<<"약수를 구하려는 자연수를 입력하시오.\n"
    cin>>N;
    cout<<'\n';
    cout<<"자연수 "<N<<"의 약수는 다음과 같습니다.\n";
    for(int i=1;i<=N;i++)
    {
        if(N%i==0){
            cout<<i<<endl;
            Sum++;
        }    
    } 
    cout<<'\n';
    cout<<"자연수"<<"의 약수의 개수는 "<<Sum<<"입니다.\n";
    
    return 0;
}
