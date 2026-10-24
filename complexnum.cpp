#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;

    }
    complex(float r,float i)
    {real=r;
    imag=i;

}
~complex()
{
}
void display(void)
{
    cout<<real<<"+"<<imag<<"j"<<endl;
}
};
int main()
{
    complex c1(2.0,3.0);
    cout<<"complex no. is"<<endl;
    c1.display();
    complex c2(5.0,7.0);
    cout<<"complex no. is"<<endl;
    c2.display();
    complex c3(8.4,-6.7);
    cout<<"complex no. is"<<endl;
    c3.display();
    return(0);
    

} 
/*PS C:\Users\pooja\OneDrive\Documents\c++> & C:\Users\pooja\OneDrive\Documents\c++\complexnum.exe
complex no. is
2+3j
complex no. is
5+7j
complex no. is
8.4+-6.7j
PS C:\Users\pooja\OneDrive\Documents\c++> */
