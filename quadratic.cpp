#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A,B,C;
    cout<<"2차방정식의 계수를 순서대로  입력하시오. (ex. 2x^2 + 3x-1=0의 경우, A=2,B=3,C=-1)\n";
    cin>>A>>B>>C;
    double D = pow(B,2)-4*A*C;
    if(A==0)
    {
        if(B==0)
        {
            if(C==0)
                cout<<"해는 무한히 존재합니다.\n";
            else
                cout<<"해가 존재하지 않습니다.\n";
        }
        else
            cout<<"x="<<-(C/B)<<endl; 
    }
    
    else
    {
        if(D>0)
        {
            cout<<"서로 다른 2개의 실근을 가집니다.\n";
            cout<<"x1="<<(-B+sqrt(D))/(2*A)<<" x2="<<(-B-sqrt(D))/(2*A)<<endl;
        }
        else if(D==0)
        {
            cout<<"중근을 가집니다.\n";
            cout<<"x="<<-B/(2*A)<<endl;
        }
        else
        {
            cout<<"서로 다른 2개의 허근을 가집니다.\n";
            cout<<"x1="<<-B/(2*A) <<'+'<<abs(sqrt(-D)/(2*A))<<'i'<<" x2="<<-B/(2*A) <<'-'<<abs(sqrt(-D)/(2*A))<<'i'<<endl;       
        }
    }

    return 0;
}
