#include <iostream>
using namespace std;

int main()
{
    int N;
    int Sum=0;
    
    cout<<"����� ���Ϸ��� �ڿ����� �Է��Ͻÿ�.\n";
    cin>>N;
    cout<<'\n';
    cout<<"�ڿ��� "<<N<<"�� ����� ������ �����ϴ�.\n";
    for(int i=1;i<=N;i++)
    {
        if(N%i==0){
            cout<<i<<endl;
            Sum++;
        }    
    } 
    cout<<'\n';
    cout<<"�ڿ��� "<<N<<"�� ����� ������ "<<Sum<<"�Դϴ�.\n";
    
    return 0;
}
