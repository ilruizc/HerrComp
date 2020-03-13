#include <iostream>
#include <cmath>

using namespace std;

double x=0.1;
double t=1.0;
double sum = 1.0;
double eps = pow (10,-8);
int i=1;


int main (void)
{
  cout.precision(16);
  cout.setf(ios::scientific);
  
  do {
 cout<<i<<"\t"<<sum<<endl;
    t = -t * x/i;
    sum = sum + t;
    i++;
  }while (fabs(t/sum)>eps);
  cout<<exp(-x)<<endl;
}    



