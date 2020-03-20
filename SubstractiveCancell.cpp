#include <iostream>
#include <cmath>

using namespace std;
typedef double Real;


double Sum1 (int n);
double Sum2 (int n);
double Sum3 (int n);


int main (void)
{
  int N=1  ;
  cout.precision(6);
  cout.setf(ios::scientific);

  for(N; N <=1000 ; N++){
   
    cout<<N<<"\t"<<(abs(Sum1(N)-Sum3(N))/Sum3(N))<<"\t"<<(abs(Sum2(N)-Sum3(N))/Sum3(N))<<"\t"<<Sum3(N)<<endl;
  }
  

  return 0;



}

Real Sum1 (int n)
{
  Real suma = 0. ;
  int sign = -1;

  for (int ii=1; ii <= 2*n; ii++)
    {
      suma += sign*1.0*ii/(ii+1);
      sign *= -1;
    }
  
  return suma;

}

Real Sum2 (int n)
{
  Real suma1=0.;
  Real suma2=0.;
  Real total;

  for (int i = 1; i<=n; i++)
    {
      suma1 += 1.0*(2*i-1)/(2*i);
    }
   for (int ii = 1; ii<=n; ii++)
    {
      suma2 += 1.0*(2*ii)/(2*ii+1);
    }

   total = -suma1+suma2;
   
   return total;

}

Real Sum3 (int n)
{
  Real sum=0.;

  for (int j = 1; j <= n; j++)
    {
      sum += 1.0*1/(2*j*(2*j+1));
    }
  
  return sum;
}
