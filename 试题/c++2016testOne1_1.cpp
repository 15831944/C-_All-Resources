#include <iostream>
using namespace std;
class Complex{
private:
	int r, i;
public:
	Complex(int r=0,int i=0){
		this->r = r;
		this->i = i;
	}
	Complex(Complex &old){
		r = old.r;
		i = old.i;
	}
	void Display(){
		cout<<r;
		if(i>0){
			cout<<"+";
		}
		cout<<i<<"i"<<endl;
	}
	friend Complex AddComplex(const Complex &c1,
 					const Complex &c2);
};
Complex AddComplex(const Complex &c1,
 					const Complex &c2){
	Complex c(c1.r+c2.r, c1.i+c2.i);
	return c; 	
}
int main(){
 	Complex  c0(2,-3);
    Complex  c1(c0);
	cout<<"c1 is: "; 
	c1.Display();
    Complex c2(3,4);
    cout<<"c2 is: "; 
    c2.Display();
    Complex c3;
    c3 = AddComplex(c1,c2); 
    cout<<"c3 is: "; 
    c3.Display();	
    return 0;

}
