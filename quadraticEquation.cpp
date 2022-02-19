#include <iostream>
#include<cmath>
\\constant to represent type of solutions to an equation
const int NO_SOLUTION = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTION = 2;
const int ALL_REALS = 3;
\\quadratic : solves quadratic equation ax^2+bx+c=0;
\\input: a,b,c are coefficients of equation
\\output: 1. type of solution (return value)
\\        2. out_x1, out_x2 --> solution to equation(output parameters)
\\assumptions: 1. if ONE real solution --> value of out_x1 is returned
               2. if NO real solution --> value of out_x2,out_x1 are not defined
int qaudratic(double a, double b, double c,double& out_x1,double& out_x2){
  double d;
 if(a!=0.0){
  d=b*b-4*a*c;
    if(d>0){
       out_x1=(-b+math.sqrt(d))/(2*a);
       out_x2=(-b-math.sqrt(d))/(2*a);
      return TWO_REAL_SOLUTION;
      }
    if(d<0)
      return NO_REAL_SOLUTION;
    if((d==0){
      out_x1=-b/(2*a);
     return ONE_REAL_SOLUTION; 
     }
     }
    else
    out_x1=linear(b,c,outX);
    return ALL_REALS;
    }
    \\linear : solves linear equation-->ax+b=0;
    \\ input : a ,b -->coefficients of equation
    \\output : 1.Type of solution(return value)
               2. outX --> solution(output parameter)
    \\Assumption : if NO solution--> outX NOT defined
int linear(double a, double b, double& outX){
double x;
if(a!=0){
x= -b/a;
outX=x;
return ONE_REAL_SOLUTION;
}
else if(a==0&&b==0){
x=0;
outX=x;
return ALL_REALS
}
else \\ a==0&&b!=0
return NO_SOLUTION;
}

 
using namespace std;

int main(){
  double a,b,c;
  
  cout<<"Enter the coefficients of the Quadratic Equations---> \n"
    cin>> a>>b>>c;
  cout<<"Equation--> "<<a<<"x^2 + "<<b<<"x +"<<c<<" = 0"<<endl;
  switch(quadratic(a,b,c,out_x1,out_x2))
  {
    case NO_SOLUTION :
      cout<<"No Solution!"<<endl;
         break;
    case ONE_REAL_SOLUTION :
      cout<"One Solution :"<<outx1<<endl;
         break;
    case TWO_REAL_SOLUTION :
      cout<<"Two solutions : "<<out_x1<<" "<<out_x2<<endl;
         break;
    case ALL_REALS :
      cout<<"All real numbers are solutions"<<endl;
         break;
    default:
      cout<<"error"<<endl;
         break;
  }
  
  return 0;
  )
