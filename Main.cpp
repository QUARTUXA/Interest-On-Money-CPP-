#include<iostream>
#define p cout
#define i cin
using namespace std;
float blad(int currentMoney, float interestGiven = 1.06 ){
 return currentMoney * interestGiven; 
   }
  int main (){
    int money ; 
    float interest;
    p<<"Enter your income / money: ";
    i>>money;
    p<<"\nEnter your interest rate: ";
    i>>interest;
    p<<"\nYour income after "<<interest<<" interest rate is: "<<blad(money,interest);
  
    return 0;
  }