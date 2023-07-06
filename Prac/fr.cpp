#include<iostream>
using namespace std;
void mk(int e,int u,int m,int c,int o, int t ,int p);
int main(){
   int eng,urdu,math,comp,obt,tot,per;
   
   cout<<"MAths: ";
   cin>>math;
   cout<<"Eng: ";
   cin>>eng;
   cout<<"urdu: ";
   cin>>urdu;
   cout<<"comp: ";
   cin>>comp;
  
   mk(eng,urdu,math,comp,obt,tot,per);
   return 0;
}
void mk(int e,int u,int m,int c,int o, int t ,int p){
     o=m+e+u+c;
   t=400;
   p=(o)*100/t;
   cout<<"Math: "<<m<<endl;
   cout<<"eng: "<<e<<endl;
   cout<<"comp:   "<<c<<endl ;
   cout<<"urdu: "<<u<<endl;
   cout<<"PErcentage is: "<<p<<endl;
 if(p >= 80 && p <= 90 ){
    cout<<"A";
 }
 
else if(p >= 70 && p<80){
    cout<<"B";
 }
 
else if( p>=60 && p < 70){
    cout<<"C";
 }
 
else if(p>=50 && p < 60){
    cout<<"D";
 }
else{
   cout << "Your Grade IS F U are Fail (sorry)" <<endl;
  }
 
 
 

}