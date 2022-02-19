#include<iostream>
using namespace std;
int 
int factorial(int num);
int kcombination(int n,int k );

int main ()
{

int n,k
cout<<"Please enter n,k (k<=n)"<<endl;
cin>>n>>k;
cout<<n<<"choose"<<k<<"="<<k_combination(n,k)<<endl;
return 0;

}
int k_combination(int n,int k)
{
  int nFact,kFact,k_nFact,i,k_comb;
  nFact=factorial(n);
kFact=factorial(k);
k_nFact=factorial(n-k);
  k_comb=int(nFact/(kFact*k_nFact));
  return k_comb;
}

k_comb=int(nFact/(kFact*k_nFact));
int factorial(int num)
{
int f=1;
for (int i=1;i<=num;i++)
f=f*i;
return f;
}

