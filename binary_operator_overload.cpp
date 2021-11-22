#include<iostream>
using namespace std;
class complex
{
  float real,imag;
  public:
  void get()
  {
  	cout<<"Enter real and imaginary values=";
   	cin>>real>>imag;
  }
  void print()
  {
 	cout<<real<<"+"<<imag<<"i";
  }
  complex operator +(complex c2)
  {
 	complex temp;
 	temp.real=real+c2.real;
 	temp.imag=imag+c2.imag;
 	return temp;
  }
};
int main()
{
   complex c1,c2,c3;
   cout<<"Enter 1st complex number"<<endl;
   c1.get();
   cout<<"Enter 2nd complex number"<<endl;
   c2.get();
   c3=c1+c2;
   c3.print();
   return 0;
}
