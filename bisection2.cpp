#include<bits/stdc++.h>
using namespace std;
double f(double x){
    // return ((x*x*x)+(3*x)-5);
    return (x*x*x)-cos(x)-1;
}
int main(){
     int i=0;
     float a,b,c,fa,fb,fc;
     up:

     cin>>a>>b;
     fa=f(a);
     fb=f(b);
     if(fa*fb>0){
          cout<<"Try again";
          goto up;
     }
     do{
     c=(a+b)/2;
     fc=f(c);
     if(fa*fc>0){
          a=c;
          fa=fc;
     }else{
          b=c;
          fb=fc;
     }
     i++;
     }while(fabs(fc)>0.01);
     cout<<"Root is " <<c<<endl;
     return 0;
}

