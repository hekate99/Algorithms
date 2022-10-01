// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
double SqrtNumber (double num){
double temp = 0; 
double sqrt=num/2; 
while(sqrt!=temp) 
{ 
temp=sqrt; 
sqrt=(num/sqrt+sqrt)/2; 
}
return sqrt; 
}
int main() {
  cout <<SqrtNumber(555.0736);

    return 0;
}