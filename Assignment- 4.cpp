#include <iostream>
using namespace std;
class Complex
{
    int real ;
    int img;
public:
    friend istream & operator>>(istream &din,Complex &C);
    friend ostream & operator<<(ostream &din,Complex &C);

    Complex operator+(Complex C2)
    {
        Complex C;
        C.real=real+C2.real;
        C.img=img+C2.img;
        return C;
    }
    Complex operator*(Complex C2)
    {
        Complex C;
        C.real=(real*C2.real)-(img*C2.img);
        cin>>img;C.img=(real*C2.img)+(img*C2.real);
        return C;
    }
    void operator ++()
    {
            
            real++;
            img++;
    }
    void operator++(int)
    {       
        real++;
        img++;
    }

};



                 istream & operator>>(istream &din,Complex &c)
                {
                   cout<<"\nEnter real part of complex number:\n";
                   din>>c.real;
                   cout<<"\nEnter imaginary part of complex number:\n";
                   din>>c.img;
                   return din;
                   
                }


                ostream & operator<<(ostream &dout,Complex &c)
                {
                   cout<<"The complex number is "<<c.real<<"+"<<c.img<<"i\n";
                   
                }
int main() 
{
    Complex c1,c2,c3;
    cin>>c1;
    cout<<c1;
    cin>>c2;
    cout<<c2;
    c3=c1+c2;
    cout<<"\nAddition is\n";
    cout<<c3;
    cout<<"\nMultiplication  is\n";
    cout<<c3;
    ++c3;
    cout<<"Pre-increment is\n";
    cout<<c3;
    c3++;
    cout<<"Post-increment is\n";
    cout<<c3;
    
    return 0;
}

