#include<iostream>
using namesoace std;
int factorial(int num){
int f=1;
for (int i=1;i<=num;i++)
f=f*i;
return f;
}
int main ()
{

int n,k,nFact,kFact,k_nFact,i,k_comb
cout<<"Please enter n,k (k<=n)"<<endl;
cin>>n>>k;

nFact=factorial(n);
kFact=factorial(k);
k_nFact=factorial(n-k);

k_comb=int(nFact/(kFact*k_nFact));
cout<<n<<"choose"<<k<<"="<<k_comb<<endl;
return 0;

}

