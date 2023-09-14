#include<iostream>
using namespace std;

///Using complex class to add complex numbers
 

class complex
{ 
//Private parts of the complex class
/**
* @param real real part
 @param img imaginary part
*/
 private:
    int real;
    int img;
 public: 
 
 /**
 *Functions like computing add,subract,multiply
 @param complex add complexes
 */
    complex()
    {
     real=0;
     img=0;
    }
    
    ///using friend functions
    complex(int ,int);
    friend complex operator+(complex,complex);
    friend complex operator-(complex,complex);
   friend void operator*(complex,complex);
   /**
   @param NULL no parameter
   @return no return
   */
   void display()
   {  
      if(real>0 && img>0)
         cout<<"Number is"<<real<<"+i"<<img<<endl;
      else
          cout<<"Number is"<<real<<"i"<<img<<endl;
         
   }

};

/**
*taking real an imaginary values
@param complex complex param
@param complex complex parameter
*/

complex:: complex(int real,int img)
{
 this->real=real;
 this->img=img;

}

/**
*Adding complex numbers
@param c1 complex c1
@param c1 complex c1
*/

complex operator+(complex c1,complex c2)
{

 complex c3;
 
 c3.real=c1.real+c2.real;
 c3.img=c1.img+c2.img;
 
 return c3;

}

/**
*Subtracting complex numbers
@param c1 complex c1
@param c1 complex c1
*/

complex operator-(complex c1,complex c2)
{

 complex c4;
 
 c4.real=c1.real-c2.real;
 c4.img=c1.img-c2.img;
 
 return c4;

}

/**
*Multiplying complex numbers
@param c1 complex c1
@param c1 complex c1
*/


void operator*(complex c1,complex c2)
{

 complex c5;
 
 c5.real=c1.real*c2.real-c1.img*c2.img;
 c5.img=c1.img*c2.real+c1.real*c2.img;
 cout<<"After multiply is"<<c5.real<<"+i"<<c5.img<<endl;

}

///Driver code

int main()

{ 
  int i,j;
 cout<<"Enter the real and imaginary ";
 cin>>i>>j;
 complex c1(i,j);
 cout<<"Enter the real and imaginary ";
 cin>>i>>j;
 complex c2(i,j);
 
 cout<<"After Adding";
 complex c6=c1+c2;
 c6.display();
 
 cout<<"After subtracting";
 complex c7=c1-c2;
 c7.display();
 
 cout<<"After Multiplication";
 
 c1*c2;
 //c8.display();

}


 
