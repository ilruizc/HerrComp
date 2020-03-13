#include <iostream>
#include <cmath>

using namespace std;  



int main (void)
{
  
 const  double pi = 3.141592;
  // int N = 10;
  double sum=0.;
  double t=0.;
  int i=1;
  double j;
  
  
  
  
  for ( j=pi/2; j <= 2*pi; j = j + (pi/2))
    {
      t=j;
      sum=j;
      
      for(i;i<=10;i++)
	{
	  
	  t=(t*(-1)*j*j)/(2*i*(2*i+1));
	  sum=sum+t;
	}
      cout<<j<<"\t"<<sum<<endl;
      
    }
  return 0;
  
}

