#include<iostream>
using namespace std;

int analyzeDigits(int num,int& outSum);

int main(){
int n,countDigs,sumDigs;
cout<<"Enter the number : "<<endl;
cin>>n;
countDigs=analyzeDigits(n,sumDigs);
cout<<n<< " contains "<<countDigs<<" digits"<<endl;
cout<<"Sum of the digits in " <<n<<" : "<<sumDigs<<endl;

return 0;
}

int analyzeDigits(int num,int& outSum)
{
int count,sum;count=sum=0;
int currDig;
 
while(num!=0){
currDig=num%10;
count++;
sum=sum+currDig;
num=num/10;
}
outSum=sum;
return count;
}




