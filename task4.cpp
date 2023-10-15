#include<iostream>
using namespace std;
float balancecalculate(float minutes);
main(){
    char servicecode;
    cout<<"Enter the service code(R/r for regular, P/p for premium): ";
    cin>>servicecode;

    if(servicecode=='p' || servicecode=='P'){
    char timecall;
    cout<<"Enter time of tha call (D/d for day, N/n for night): ";
    cin>>timecall;}
    float minutes;
    cout<<"Enter the number of minutes used: ";
   cin>>minutes;
    if(servicecode=='P' || servicecode=='p')
    {cout<<"Service Type: Premium"<<endl;}
    else if(servicecode=='R' || servicecode=='r')
    {cout<<"Service Type: Regular"<<endl;}
    cout<<"Total Minutes Used: "<<minutes <<endl;
    float amount;
amount=balancecalculate(minutes);
cout<<"Amount Due: $"<<amount;
}
float balancecalculate(float minutes)
{char servicecode;
char timecall;
float amount;
if((servicecode=='P' || servicecode=='p') && (timecall=='D' || timecall=='d') && minutes>75 ){
    float calculate1=minutes-75;
    amount=calculate1*0.10;
    

}
if((servicecode=='P' || servicecode=='p') && (timecall=='D'|| timecall=='d') && minutes<=75 ){
    
    amount=0;
   
}
if((servicecode=='P' || servicecode=='p') && (timecall=='N'|| timecall=='n')  && minutes>100 ){
    float calculate1=minutes-100;
   amount=calculate1*0.05;
   }
    if((servicecode=='P' || servicecode=='p') && (timecall=='N'|| timecall=='n')  && minutes<=100 ){
    
    amount=0;
   }

    if((servicecode=='R' || servicecode=='r')  && minutes>50 ){
    float calculate1=minutes-50;
   amount=(10.00)+(calculate1*0.10);
   }

    if((servicecode=='R' || servicecode=='r')  && minutes<=50 ){
  
  amount=10.00;
    }
    return amount;
    }
