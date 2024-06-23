#include<iostream>
using namespace std;
struct Complex
{
    int real, imaginary;
};
void showcomplex(Complex c)
{
    cout<<"Complex No "<<c.real<<"+i"<<c.imaginary<<endl;
}
void getcomplex(Complex& c)
{
    cout<<"\t\nEnter the detail of Complex No"<<endl;
    cout<<"Enter real part ";
    cin>>c.real;
    cout<<"Enter imaginary Part ";
    cin>>c.imaginary;
}
Complex Addcomplex(Complex cc1, Complex cc2)
{
    Complex temp;
    temp.real = cc1.real + cc2.real;
    temp.imaginary = cc1.imaginary + cc2.imaginary;
   // showcomplex(temp);
   return temp;
}

int main()
{
    Complex c1, c2;

    getcomplex(c1);
    getcomplex(c2);

    cout<<endl;
    showcomplex(c1);
    showcomplex(c2);

    Complex c3 = Addcomplex(c1, c2);

    showcomplex(c3);

    return 0;
}
