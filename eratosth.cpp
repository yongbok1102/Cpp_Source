#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter the number(>2)\n";
    cin>>num;    
    int nSet = (num - 2) + 1;
    int* Nat; Nat = new int[nSet];     
    
    if(num<=2)
        cout<<"Invalid output!\n";
    else{
        for(int i=0; i<nSet; i++){
            Nat[i] = i+2;
        }
        
        for(int i=0; i<num-1; i++)
        {
            if(Nat[i]!=0){
                for(int j=i+1;j<num;j++){
                    if(Nat[j]%Nat[i]==0)
                        Nat[j] = 0;
                }
            }
        }
        cout<<"Set of prime numbers\n";
        for(int i=0;i<num;i++){
            if(Nat[i]!=0)
                cout<<Nat[i]<<endl;
        }
    }
    
    return 0;
    
}
