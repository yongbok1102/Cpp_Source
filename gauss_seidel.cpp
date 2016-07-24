#include <iostream>
#include <cmath>
using namespace std;

/* solves linear system using
   Gauss-Seidel method */

int main(){
  double x=0; double y=0; double z=0;
  double xold=1; double yold=1; double zold=1;//initialization
  
  int N=0; double tol=1e-008;//computational condition
  
  /*Gauss-Seidel method */
  
  while(abs(x-xold)>tol && abs(y-yold)>tol && abs(z-zold)>tol){
    xold=x;yold=y;zold=z;
    x=(2*y+z)/3.;
    y=(4.+2*x-z)/(-3.);
    z=(5.-2*x+4*y)/7.;
    N++;
    cout<<"iteration "<<N<<" x="<<x<<" y="<<y<<" z="<<z<<endl;
  }
  
  return 0;
}
  
  
